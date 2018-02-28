#include "Cell.h"


Cell::Cell () {
    piece = NULL;
}

bool Cell::isEmpty(){
    return (piece == NULL) ? true : false ;
}

Piece* Cell::getPiece() {
    return piece;
}

void Cell::setPointerToPiece(Piece p) {
    piece=&p;
}
