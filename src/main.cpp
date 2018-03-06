#include <iostream>
#include <stdlib.h>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"
#include "Game.h"
#include "Chess.h"


int main() {
    Board::getInstance().init();
<<<<<<< HEAD
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
<<<<<<< HEAD
//     Board::getInstance().moveOnBoard(2,1, 0,1); // Rook1
=======
//     Board::getInstance().moveOnBoard(2,1, 0,1); // Rook1 FAIL
>>>>>>> a711bda14041bdf9cc391a208ee75d8dc5be102e
    do{
        std::string piecexy;
        std::string coord;
        std::cout << "Ficha que quieres mover" << '\n';
        cin>>piecexy;
        std::cout << "Donde quieres moverla" << '\n';
        cin>>coord;
        std::cout << charToShort(piecexy[0]) << '\n';
        Board::getInstance().moveOnBoard(charToShort(piecexy[0]),charToShort(piecexy[1]),
        charToShort(coord[0]),charToShort(coord[1])); // Pawn1


    }while(true);
<<<<<<< HEAD
=======

>>>>>>> a711bda14041bdf9cc391a208ee75d8dc5be102e
    /*do {
        std::cout << "Ficha que quieres mover" << '\n';
        std::string piecexy;
        cin<<piecexy;
        std::cout << "Donde quieres moverla" << '\n';
        std::string coord;
        Board::getInstance().moveOnBoard((unsigned short)atoi(piecexy[0]),(unsigned short)atoi(piecexy[1]),(unsigned short) atoi(coord[0]),(unsigned short)atoi(coord[1])); // Pawn1
    } while (true);*/
<<<<<<< HEAD
=======
=======
    Chess chessGame;
    std::cout << "Partida 1" << '\n';
        chessGame.play();
>>>>>>> 4692dfa751adc2f1f7f0169cd6f3556721543af3

>>>>>>> a711bda14041bdf9cc391a208ee75d8dc5be102e
}
