#include <iostream>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"

int main() {
    Board::getInstance().init();
    Board::getInstance().print();    
}
