#ifndef GAME_H_
#define GAME_H_

// #include "Piece.h"
// #include "Board.h"

class Game{

protected:
    bool gameOver;
    int players;
    virtual void start() = 0;
    virtual bool end() = 0;
    virtual void turn() = 0;
    virtual void moveAsk() = 0;
    virtual void finish() = 0;

public:
    Game(int players) : players(players) {}

    void play();

};


#endif
