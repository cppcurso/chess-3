#include <iostream>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"

int main() {
    Board::getInstance().init();
    Board::getInstance().moveOnBoard(0,3, 2,5);

}
