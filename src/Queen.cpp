#include "Queen.h"

Queen::Queen(unsigned short x, unsigned short y, bool colour) : Piece(x,y, colour){
    figure = 'Q';
}

bool Queen::valid(unsigned short x, unsigned short y){
    if ((x != this->x && y != this->y) && (((this->x - x) + this->y != y) && ((x - this->x) + this->y != y))) { // MOVE != ROOK && MOVE !=BISHOP
        return false;
    }
    return true;
}
