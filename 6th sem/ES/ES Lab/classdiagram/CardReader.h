#ifndef CardReader_h
#define CardReader_h

#include "ATM.h"
#include "Card.h"


class CardReader : public ATM, public Card, public ATM {

 public:

    /**
     * @element-type Card
     */
    Card *reads;
};

#endif // CardReader_h
