#include <iostream>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"

int main() {
    Board::getInstance().init();
    Board::getInstance().print();
    Board::getInstance().getCell(1,5).getPiece()->valid(2,5);
}
