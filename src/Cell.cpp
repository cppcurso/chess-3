#include "Cell.h"


Cell::Cell () {
    piece = NULL;
}

bool Cell::isEmpty(){
    return (piece == NULL);
}

Piece* Cell::getPiece() {
    return piece;
}

void Cell::setPiece(Piece* p) {
    piece = p;
}
void Cell::setCellToNull(){
    this->piece = NULL;
}
