#ifndef KING_H_
#define KING_H_
#include "Piece.h"

class King: public Piece
{

public:
    King(unsigned short x, unsigned short y, bool colour);
    bool valid(unsigned int x, unsigned int y);
};

#endif
