#ifndef CHESS_H_
#define CHESS_H_

#include "Game.h"
#include "Board.h"

class Chess: public Game{

public:
    bool checkMate;
    int turnNumber;
    Chess() : Game(2) {}
    unsigned short charToShort(char letter);
    void start();
    bool end();
    void turn();
    void moveAsk();
    void finish();
};

#endif
