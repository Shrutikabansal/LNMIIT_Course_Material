#ifndef Session_h
#define Session_h

class Card;
class ATM;

class Session {

 public:

    /**
     * @element-type Card
     */
    Card *myCard;

    /**
     * @element-type ATM
     */
    ATM *creates;
};

#endif // Session_h
