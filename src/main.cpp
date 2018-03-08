#include <iostream>
#include <stdlib.h>
// #include <gtest/gtest.h>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"
#include "Game.h"
#include "Chess.h"


//
// int main(int argc, char **argv) {
// 	::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }

int main() {
    Board::getInstance().init();
    Chess chessGame;
    std::cout << "Partida 1" << '\n';
    chessGame.play();
}
