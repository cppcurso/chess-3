#include "King.h"

King::King(unsigned short x, unsigned short y, bool colour) : Piece(x, y, colour){
    figure = 'K';
}

bool King::valid( unsigned short x, unsigned short y ) {
    if( (this->x + 1 == x && this->y == y) ||       // Move down
        (this->x - 1 == x && this->y == y) ||       // Move up
        (this->y + 1 == y && this->x == x) ||       // Move right
        (this->y - 1 == y && this->x == x) )        // Move left
    {
        return true;
    }

    if( (this->x + 1 == x && this->y + 1 == y) ||    // Move down-right
        (this->x - 1 == x && this->y + 1 == y) ||    // Move up-right
        (this->x + 1 == x && this->y - 1 == y) ||    // Move down-left
        (this->x - 1 == x && this->y - 1 == y) )     // Move up-left
    {
        return true;
    }
    return false;
}
