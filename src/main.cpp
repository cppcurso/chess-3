#include <iostream>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"

int main() {
    Board::getInstance().init();
    // COLLISION TEST FOR ROOK
    Board::getInstance().moveOnBoard(1,0, 2,0); // Pawn1
    Board::getInstance().moveOnBoard(2,0, 3,0); // Pawn1
    Board::getInstance().moveOnBoard(0,0, 1,0); // Rook1
    Board::getInstance().moveOnBoard(1,1, 2,1); // Pawn2
    Board::getInstance().moveOnBoard(1,2, 2,2); // Pawn3
    Board::getInstance().moveOnBoard(1,3, 2,3); // Pawn4
    Board::getInstance().moveOnBoard(1,0, 1,3); // Rook1
    Board::getInstance().moveOnBoard(1,3, 1,1); // Rook1
    Board::getInstance().moveOnBoard(2,1, 3,1); // Pawn2
    Board::getInstance().moveOnBoard(1,1, 2,1); // Rook1
    Board::getInstance().moveOnBoard(0,2, 1,1); // Bishop1
    Board::getInstance().moveOnBoard(0,1, 2,0); // Knight1
    Board::getInstance().moveOnBoard(2,1, 0,1); // Rook1 FAIL
}
