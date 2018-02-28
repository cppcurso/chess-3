#ifndef CELL_H_
#define CELL_H_

#include "Piece.h"

class Cell
{
    Piece* piece;
public:
    bool isEmpty();
    Piece* getPiece();
    void setPointerToPiece(Piece p);

};

#endif
