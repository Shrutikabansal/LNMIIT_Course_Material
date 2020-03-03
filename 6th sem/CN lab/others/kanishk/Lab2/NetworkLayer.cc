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

#include "NetworkLayer.h"

Define_Module(NetworkLayer);

void NetworkLayer::initialize()
{
    // TODO - Generated method body
    nlId=par("nlId");
    fromDataLinkLayer=gate("fromDataLinkLayer");
    toDataLinkLayer=gate("toDataLinkLayer");
    if(nlId==1)
    {
        N_PDU* msg = new N_PDU();
        scheduleAt(0,msg);
    }
}
int count=1;
void NetworkLayer::handleMessage(cMessage *msg)
{
    // TODO - Generated method body
    N_PDU* message = static_cast<N_PDU *>(msg);
    if(message->isSelfMessage())
    {
        N_PDU* message = new N_PDU();
        message->setId(count);
        message->setType(0);
        send(message,toDataLinkLayer);

        if(count<10)
        {
            N_PDU* newMsg = new N_PDU();
            newMsg->setId(count++);
            newMsg->setType(0);
            scheduleAt(simTime(),newMsg);
        }
    }
    else
    {
        delete message;
    }
}
