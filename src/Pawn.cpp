#include "Pawn.h"

Pawn::Pawn(unsigned short x, unsigned short y, bool colour) : Piece(x,y, colour){
    figure = 'P';
}

bool Pawn::valid(unsigned short x, unsigned short y){
	return false;
}
