//
// Generated file, do not edit! Created by nedtool 5.4 from D_PDU.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __D_PDU_M_H
#define __D_PDU_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>D_PDU.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet D_PDU
 * {
 *     int D_PDU_pId;
 *     int nodeId;
 * }
 * </pre>
 */
class D_PDU : public ::omnetpp::cPacket
{
  protected:
    int D_PDU_pId;
    int nodeId;

  private:
    void copy(const D_PDU& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const D_PDU&);

  public:
    D_PDU(const char *name=nullptr, short kind=0);
    D_PDU(const D_PDU& other);
    virtual ~D_PDU();
    D_PDU& operator=(const D_PDU& other);
    virtual D_PDU *dup() const override {return new D_PDU(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getD_PDU_pId() const;
    virtual void setD_PDU_pId(int D_PDU_pId);
    virtual int getNodeId() const;
    virtual void setNodeId(int nodeId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const D_PDU& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, D_PDU& obj) {obj.parsimUnpack(b);}


#endif // ifndef __D_PDU_M_H
