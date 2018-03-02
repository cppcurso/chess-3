#ifndef PAWN_H_
#define PAWN_H_

#include "Piece.h"

class Pawn: public Piece
{

public:
  Pawn(unsigned short x, unsigned short y, bool colour);
  bool valid(unsigned short x, unsigned short y);
};

#endif
