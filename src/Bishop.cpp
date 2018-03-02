#include "Bishop.h"


Bishop::Bishop(unsigned short x, unsigned short y, bool colour) : Piece(x,y, colour){
    figure = 'B';
}

bool Bishop::valid(unsigned short x, unsigned short y) {
    if (((this->x - x) + this->y == y) || ((x - this->x) + this->y == y)) {
        return true;
    }
    return false;
}
