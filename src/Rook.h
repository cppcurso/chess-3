#ifndef ROOK_H_
#define ROOK_H_
#include "Piece.h"

class Rook : public Piece {

public:
    Rook(unsigned short x, unsigned short  y, bool colour);
    bool valid (unsigned short x, unsigned short y);

};

#endif
