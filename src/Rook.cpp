#include "Rook.h"

//Rook::Rook(){}

Rook::Rook(unsigned short  x, unsigned short  y, bool colour) : Piece(x,y, colour){
    figure = 'R';
}

bool Rook::valid(unsigned short x, unsigned short y) {
    if (x == this->x && y == this->y) { // dont move
        return false;
    }
    if (x >= 8 || y >= 8 ) { // out of board
        return false;
    }
    if (x != this->x && y != this->y) { // MOVE != horizontal && != vertical
        return false;
    }

    return true;
}
