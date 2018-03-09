#include <iostream>
#include <stdlib.h>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"
#include "Game.h"
#include "Chess.h"
#include "Files.h"
// #include <gtest/gtest.h>
// int main(int argc, char **argv) {
// 	::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }

int main() {
    char option;
    std::vector<Piece> pieces;
    std::cout << "==========  WELCOME TO THE CHESS GAME  ==========" << '\n';
    std::cout << '\n';
    std::cout << "n-> new game" << '\n';
    std::cout << "l-> load game" << '\n';
    cin>>option;
    if(option=='n'){
        Board::getInstance().init();
    }else if (option=='l'){
        Files::load("SavedGame");
    }
    Chess chessGame;
    chessGame.play();
}
