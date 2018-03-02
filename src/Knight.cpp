#include "Knight.h"


Knight::Knight(unsigned short x, unsigned short y, bool colour) : Piece(x,y, colour) {
    figure = 'k';
}

bool Knight::valid(unsigned short x, unsigned short y){
    if(x == this->x + 1 || x == this->x - 1){           // Move down/up + 1 & Move right/left + 2
        if (y == this->y + 2 || y == this->y - 2) {
            return true;
        }
    } else if(x == this->x + 2 || x == this->x - 2){    // Move down/up + 2 & Move right/left + 1
        if (y == this->y + 1 || y == this->y - 1) {
            return true;
        }
    }
    return false;
}
