#include "Pawn.h"

Pawn::Pawn(unsigned short x, unsigned short y, bool colour) : Piece(x,y, colour){
    figure = 'P';
}

bool Pawn::valid(unsigned short x, unsigned short y){
    if ( !black && this->x - 1 == x && this->y == y ){  // Move up white Pawn
        return true;
    }
    if ( black && this->x + 1 == x && this->y == y ){   // Move down black Pawn
    	return true;
    }

    if ( !getCell(x, y).isEmpty() ) {
        if ( !black && this->x - 1 == x && this->y - 1 == y ){  // Up-Left eat
            return true;
        }
        if ( !black && this->x - 1 == x && this->y + 1 == y ){  // Up-Right eat
            return true;
        }

        if ( black && this->x + 1 == x && this->y - 1 == y ){   // Down-Left eat
            return true;
        }
        if ( black && this->x + 1 == x && this->y + 1 == y ){   // Down-Right eat
            return true;
        }
    }
    return false;
}
