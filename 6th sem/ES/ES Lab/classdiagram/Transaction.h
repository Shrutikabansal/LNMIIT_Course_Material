#ifndef Transaction_h
#define Transaction_h

#include "ATM.h"
#include "Session.h"


class Transaction : public ATM, public Session, public ATM {};

#endif // Transaction_h
