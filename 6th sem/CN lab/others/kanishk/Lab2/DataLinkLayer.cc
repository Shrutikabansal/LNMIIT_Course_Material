//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "DataLinkLayer.h"

Define_Module(DataLinkLayer);

void DataLinkLayer::initialize()
{
    // TODO - Generated method body
    dllId=par("dllId");
    fromNetworkLayer=gate("fromNetworkLayer");
    fromNode=gate("fromNode");
    toNetworkLayer=gate("toNetworkLayer");
    toNode=gate("toNode");
}

void DataLinkLayer::handleMessage(cMessage *msg)
{
    // TODO - Generated method body
    if(msg->getArrivalGate()==fromNetworkLayer)
    {
        N_PDU* incoming = static_cast<N_PDU*>(msg);
        D_PDU* message = new D_PDU();
        message->setId(incoming->getId());
        message->setType(incoming->getType());
        message->encapsulate(incoming);
        send(message,toNode);
    }
    else if(msg->getArrivalGate()==fromNode)
    {
        D_PDU* message = static_cast<D_PDU*>(msg);
        if(message->getType()==0)
        {
            send(message->decapsulate(),toNetworkLayer);
            D_PDU* ack = new D_PDU();
            ack->setId(message->getId());
            ack->setType(1);
            send(ack,toNode);
        }
        if(message->getType()==1)
        {
            delete message;
        }
    }

}
