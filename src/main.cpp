#include <iostream>
#include <stdlib.h>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"
#include "Game.h"
#include "Chess.h"


int main() {
    Board::getInstance().init();
    Chess chessGame;
    std::cout << "Partida 1" << '\n';
        chessGame.play();

}
