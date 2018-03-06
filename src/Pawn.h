#ifndef PAWN_H_
#define PAWN_H_

#include "Piece.h"
#include "Board.h"

class Pawn: public Piece
{
    bool firstMove = true;
public:
    Pawn(unsigned short x, unsigned short y, bool colour);
    bool valid(unsigned short x, unsigned short y);
    void move (unsigned short x, unsigned short y);
};

#endif
