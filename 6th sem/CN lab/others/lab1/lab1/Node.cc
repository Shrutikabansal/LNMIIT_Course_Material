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

#include "Node.h"

Define_Module(Node);

void Node::initialize()
{
   address=par("id");
   in=gate("gIn");
   out=gate("gOut");
   counter=0;
   if(address==1)
   {
       cMessage* msg=new cMessage();
       scheduleAt(0,msg);
   }
}

void Node::handleMessage(cMessage *msg)
{

    if(msg->isSelfMessage())
    {
        counter=1;
        N_PDU* msg=new N_PDU("Data");
        msg->setId(1);
        msg->setType(1);
        msg->setSrc(address);
        msg->setDest(2);
        send(msg, out);

    }
    else
    {
        N_PDU *m=check_and_cast <N_PDU*>(msg);
        if((m->getType()==1 and m->getSrc()==1))
        {
             N_PDU* msg = new N_PDU("Ack");
             msg->setId(m->getId());
             msg->setType(2);
             msg->setSrc(address);
             msg->setDest(1);
             send(msg, out);
        }
        else if((m->getType()==2 and m->getSrc()==2 and counter<10))
        {
             counter=counter+1;
             N_PDU* msg = new N_PDU("Data");
             msg->setId(counter);
             msg->setType(1);
             msg->setSrc(address);
             msg->setDest(2);
             send(msg, out);
        }
    }

}
