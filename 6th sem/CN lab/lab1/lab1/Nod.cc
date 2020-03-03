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

#include "Nod.h"
#include "N_PDU_m.h"
Define_Module(Nod);

void Nod::initialize()
{
    address=par("Id");
        in=gate("gIn");
        out=gate("gOut");
        if(address==1){
            cMessage * event=new cMessage();
            scheduleAt(0,event);
        }
        counter=0;
        id=1;
}

void Nod::handleMessage(cMessage *msg)
{
    // TODO - Generated method body
    if(msg->isSelfMessage()){
        N_PDU *M= new N_PDU("data");
        send(M,out);
        counter+=1;
    }
    else if(counter<10){
        N_PDU *pkt=check_and_cast<N_PDU>(msg);

        if(address==1){
            N_PDU *M= new N_PDU("data");
            id++;
            M->setPId(id);
            M->setPtype("data");
            M->setSrc(1);
            M->setDest(2);
            send(M,out);
            counter+=1;
        }else{
            N_PDU *R= new N_PDU("ack");

            R->setPId(pkt->getPId);
            R->setPtype("ack");
            R->setSrc(1);
            R->setDest(2);
            send(R,out);

        }


    }


}
