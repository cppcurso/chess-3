#ifndef GAME_H_
#define GAME_H_

#include "Files.h"

using namespace std;

class Game{

protected:
    bool gameOver;
    int players;
    bool power=true;
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
