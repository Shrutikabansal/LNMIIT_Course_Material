#include "networkLayer.h"

Define_Module(NetworkLayer);
int count;
void NetworkLayer::initialize()
{
    id = par("id");
    //in = gate("gIn");
    //out = gate("gOut");
    from = gate("fromDataLink");
    to=gate("toDataLink");
    count=0;
    if(id==1)
    {
        N_PDU* message = new N_PDU();
        scheduleAt(0,message);
    }
}

int messageCount = 0;

void NetworkLayer::handleMessage(cMessage *msg)
{

    if(msg->isSelfMessage())
    {
        count++;
        N_PDU* message = new N_PDU();
        message->setN_PDU_pId(count);
        send(message, to);
        if(count<10){
            N_PDU* message = new N_PDU();
            scheduleAt(simTime()+1,message);
        }
    }

    else
    {
        delete msg;
    }
}
