#include "Rook.h"

Rook::Rook(){}

Rook::Rook(int x, int y, bool colour) : Piece(x,y, colour){
    figure = 'R';
}
