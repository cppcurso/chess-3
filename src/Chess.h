#ifndef CHESS_H_
#define CHESS_H_

#include "Game.h"
#include "Board.h"
#include "Piece.h"
#include "Record.h"
class Chess: public Game{

public:
    Record record;
    friend class Board;
    friend class Piece;
    bool checkMate;
    int turnNumber=0;
    bool blackTurn=false;
    Chess() : Game(2) {}
    unsigned short charToShort(char letter);
    void start();
    bool end();
    void turn();
    void moveAsk();
    void finish();
};

#endif
