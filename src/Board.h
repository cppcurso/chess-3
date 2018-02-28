#ifndef BOARD_H_
#define BOARD_H_

#include <iostream>
#include "Cell.h"

using namespace std;

class Board {
    Cell board[8][8];
public:
    Board();
    void init(); // inicializar el tablero
    bool valid(/*xPos, yPos, Piece*/);
    void print();
    void move(/*xPos, yPos, Piece*/);
};

#endif
