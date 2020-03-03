#include "dataLinkLayer.h"

Define_Module(DataLinkLayer);

void DataLinkLayer::initialize()
{
    fromNetwork = gate("fromNetwork");
    toNetwork = gate("toNetwork");
    fromNode =  gate("fromNode");
    toNode = gate("toNode");
}

void DataLinkLayer::handleMessage(cMessage *msg)
{
    if(msg->getArrivalGate()==fromNetwork){
           N_PDU* received = static_cast<N_PDU*>(msg);
           D_PDU* d = new D_PDU();
           d->setD_PDU_pId(received->getId()%2);
           d->setNodeId(2);
           d->encapsulate(received);
           send(d,toNode);
       }
       if(msg->getArrivalGate()==fromNode){
           D_PDU* received=static_cast<D_PDU*>(msg);
           if(received->getNodeId()==2) {
               send(received->decapsulate(),toNetwork);
               D_PDU* d = new D_PDU();
               d->setNodeId(1);
               send(d,toNode);
           }
           else{
               delete msg;
           }
        }

}
