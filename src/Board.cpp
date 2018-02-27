#include "Board.h"

Board::Board() {}

void Board::init(){
    for (size_t i = 3; i < 7; i++) {
        for (size_t j = 3; j < 7; j++) {
            board[i][j].setPiece(NULL);
        }
    }
}
