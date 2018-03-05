#include <iostream>
#include <stdlib.h>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"

int main() {
    Board::getInstance().init();
    // COLLISION TEST FOR ROOK
    // Board::getInstance().moveOnBoard(1,1, 2,1); // Pawn1
    // Board::getInstance().moveOnBoard(0,2, 1,1); // Pawn1
    // Board::getInstance().moveOnBoard(1,2, 2,2); // Rook1
    // Board::getInstance().moveOnBoard(1,1, 2,2); // Pawn2
//     Board::getInstance().moveOnBoard(1,2, 2,2); // Pawn3
//     Board::getInstance().moveOnBoard(1,3, 2,3); // Pawn4
//     Board::getInstance().moveOnBoard(1,0, 1,3); // Rook1
//     Board::getInstance().moveOnBoard(1,3, 1,1); // Rook1
//     Board::getInstance().moveOnBoard(2,1, 3,1); // Pawn2
//     Board::getInstance().moveOnBoard(1,1, 2,1); // Rook1
//     Board::getInstance().moveOnBoard(0,2, 1,1); // Bishop1
//     Board::getInstance().moveOnBoard(0,1, 2,0); // Knight1
//     Board::getInstance().moveOnBoard(2,1, 0,1); // Rook1 FAIL
    do{
        std::string piecexy;
        std::string coord;
        std::cout << "Ficha que quieres mover" << '\n';
        cin>>piecexy;
        std::cout << "Donde quieres moverla" << '\n';
        cin>>coord;
        Board::getInstance().moveOnBoard((unsigned short)piecexy[0],(unsigned short)piecexy[1],
        (unsigned short)coord[0],(unsigned short)coord[1]); // Pawn1

    }while(true);
}
