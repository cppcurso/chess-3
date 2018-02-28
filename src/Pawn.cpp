#include "Piece.h"

Pawn::Pawn(){}

Pawn::Pawn(int x, int y, bool colour) : Piece(x,y, colour){
    figure = 'P';
}
