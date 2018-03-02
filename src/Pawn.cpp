#include "Pawn.h"

Pawn::Pawn(unsigned short x, unsigned short y, bool colour) : Piece(x,y, colour){
    figure = 'P';
}

bool Pawn::valid(unsigned short x, unsigned short y){
    if ( x >= 8 || y >= 8 ) {   // "x" and "y" are within board limits
        std::cout << "Incorrect movement" << '\n';
        return false;
    }

    if ( this->x == x && this->y == y ) {           // Not moving
        std::cout << "Incorrect movement" << '\n';
        return false;
    }

    if ( !black && this->x - 1 == x && this->y == y ){
    	return true;
    }

    if ( black && this->x + 1 == x && this->y == y ){
    	return true;
    }

    std::cout << "Incorrect movement" << '\n';
    return false;
}
