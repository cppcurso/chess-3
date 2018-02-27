#ifndef CELL_H_
#define CELL_H_

#include "Piece.h"

class Cell
{
    Piece* piece;
public:
    Cell();
    bool isEmpty();
    Piece* getPiece();
    void setPointerToPiece(Piece* piece);

};

#endif
