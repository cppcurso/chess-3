#ifndef BOARD_H_
#define BOARD_H_

#include <iostream>
#include "Cell.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"
#include "Pawn.h"


using namespace std;

class Board {
    Cell cells[8][8];
    Board(){}; // private constructor to avoid instantiations
    Board(const Board& b);//copy constructor without implement
    void operator=(const Board& b); // Operator=  without implement
public:
    static Board& getInstance() {
        static Board instance;
        return instance;
    }
    void init(); // inicializar el tablero
    bool valid(/*xPos, yPos, Piece*/);
    void print();
    void move(/*xPos, yPos, Piece*/);
    Cell getCell(unsigned short i, unsigned short j);
};
#endif
