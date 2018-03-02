#include <iostream>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"

int main() {
    Board::getInstance().init();
    Board::getInstance().print();
    Board::getInstance().valid(3,3, 2,5);
}
