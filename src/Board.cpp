#include "Board.h"

//Board::Board() {}

void Board::init(){
    //White pieces
    cells[7][0].setPointerToPiece(Rook(7,0,0));
    cells[7][7].setPointerToPiece(Rook(7,7,0));
    cells[7][1].setPointerToPiece(Knight(7,1,0));
    cells[7][6].setPointerToPiece(Knight(7,6,0));
    cells[7][2].setPointerToPiece(Bishop(7,2,0));
    cells[7][5].setPointerToPiece(Bishop(7,5,0));
    cells[7][3].setPointerToPiece(Queen(7,3,0));
    cells[7][4].setPointerToPiece(King(7,4,0));
    for (size_t i = 0; i < 8; i++) {
        cells[6][i].setPointerToPiece(Pawn(6,i,0));
    }
    //Black pieces
    cells[0][0].setPointerToPiece(Rook(0,0,1));
    cells[0][7].setPointerToPiece(Rook(0,7,1));
    cells[0][1].setPointerToPiece(Knight(0,1,1));
    cells[0][6].setPointerToPiece(Knight(0,6,1));
    cells[0][2].setPointerToPiece(Bishop(0,2,1));
    cells[0][5].setPointerToPiece(Bishop(0,5,1));
    cells[0][3].setPointerToPiece(Queen(0,3,1));
    cells[0][4].setPointerToPiece(King(0,4,1));
    for (size_t i = 0; i < 8; i++) {
        cells[1][i].setPointerToPiece(Pawn(1,i,1));
    }
}

void Board::print(){
    for (size_t i = 0; i < 8; i++) {
        for (size_t j = 0; j < 8; j++) {
            if(cells[i][j].getPiece()== NULL) {
                std::cout << " ";
            }else{
            std::cout << cells[i][j].getPiece()->getFigure();
            std::cout << cells[i][j].getPiece()->getColour();
            std::cout << "--";
            }
        }
    std::cout << "\n";
    }
}
