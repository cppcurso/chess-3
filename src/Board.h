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
#include <iomanip>
#include <array>
#include <vector>

using namespace std;

class Board {
    array<array<Cell, 8>, 8> cells;
    Board(){}; // private constructor to avoid instantiations
    Board(const Board& b);//copy constructor without implement
    void operator=(const Board& b); // Operator=  without implement
    bool deadKing;
    unsigned short numberOfPieces;
public:
    array<array<Cell, 8>, 8> getBoard();
    void setBoard(array<array<Cell, 8>, 8> board);
    static Board& getInstance() {
        static Board instance;
        return instance;
    }
    void init(); // initialize the board
    bool valid(unsigned short x0, unsigned short y0, unsigned short x, unsigned short y);
    void print();
    bool isTheKingDead();
    void moveOnBoard (unsigned short x0, unsigned short y0,unsigned short x, unsigned short y);
    Cell getCell(unsigned short x, unsigned short y);
    bool thereIsCollision(unsigned short x0, unsigned short y0, unsigned short x, unsigned short y);
    vector<Piece*> piecesOnBoard(array<array<Cell, 8>, 8> cells);
};

#endif
