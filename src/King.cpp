#include "King.h"

King::King(unsigned short x, unsigned short y, bool colour) : Piece(x, y, colour){
    figure = 'K';
}

bool King::valid( unsigned short x, unsigned short y ) {
    if ( x >= 8 || y >= 8 ) {   // "x" and "y" are within board limits
        std::cout << "Incorrect movement" << '\n';
        return false;
    }

    if ( this->x == x && this->y == y ) {           // Not moving
        std::cout << "Incorrect movement" << '\n';
        return false;
    }

    if( (this->x + 1 == x && this->y == y) ||       // Move down
        (this->x - 1 == x && this->y == y) ||       // Move up
        (this->y + 1 == y && this->x == x) ||       // Move right
        (this->y - 1 == y && this->x == x) )        // Move left
    {
        std::cout << "Valid movement" << '\n';
        return true;
    }

    if( (this->x + 1 == x && this->y + 1 == y) ||    // Move down-right
        (this->x - 1 == x && this->y + 1 == y) ||    // Move up-right
        (this->x + 1 == x && this->y - 1 == y) ||    // Move down-left
        (this->x - 1 == x && this->y - 1 == y) )     // Move up-left
    {
        std::cout << "Valid movement" << '\n';
        return true;
    }
    std::cout << "Incorrect movement" << '\n';
    return false;
}
