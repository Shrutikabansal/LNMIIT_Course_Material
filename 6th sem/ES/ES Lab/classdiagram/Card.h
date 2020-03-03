#ifndef Card_h
#define Card_h

class Session;
class CardReader;

class Card {

 public:

    /**
     * @element-type Session
     */
    Session *mySession;

    /**
     * @element-type CardReader
     */
    CardReader *reads;
};

#endif // Card_h
