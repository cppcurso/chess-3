#include "Bishop.h"


Bishop::Bishop(unsigned short x, unsigned short y, bool colour) : Piece(x,y, colour){
    figure = 'B';
}

bool Bishop::valid(unsigned short x, unsigned short y) {
    if (x < 8 && y < 8) {
        if (((this->x - x) + this->y == y) || ((x - this->x) + this->y == y)) {
            std::cout << "Movimiento valido" << '\n';
            return true;
        }
    }
    std::cout << "Movimiento invalido" << '\n';
    return false;
}
