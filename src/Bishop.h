#ifndef BISHOP_H_
#define BISHOP_H_
#include "Piece.h"

class Bishop : public Piece
{

public:
    Bishop(unsigned short x, unsigned short y, bool colour);
    bool valid(unsigned short x, unsigned short y);
};


#endif
