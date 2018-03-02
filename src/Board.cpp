#include "Board.h"
#include <iomanip>
//Board::Board() {}

void Board::init(){
    //White pieces
    cells[7][0].setPiece(new Rook(7,0,0));
    cells[7][7].setPiece(new Rook(7,7,0));
    cells[7][1].setPiece(new Knight(7,1,0));
    cells[7][6].setPiece(new Knight(7,6,0));
    cells[7][2].setPiece(new Bishop(7,2,0));
    cells[7][5].setPiece(new Bishop(7,5,0));
    cells[7][3].setPiece(new Queen(7,3,0));
    cells[7][4].setPiece(new King(7,4,0));
    for (size_t i = 0; i < 8; i++) {
        cells[6][i].setPiece(new Pawn(6,i,0));
    }
    //Black pieces
    cells[0][0].setPiece(new Rook(0,0,1));
    cells[0][7].setPiece(new Rook(0,7,1));
    cells[0][1].setPiece(new Knight(0,1,1));
    cells[0][6].setPiece(new Knight(0,6,1));
    cells[0][2].setPiece(new Bishop(0,2,1));
    cells[0][5].setPiece(new Bishop(0,5,1));
    cells[0][3].setPiece(new Queen(0,3,1));
    cells[0][4].setPiece(new King(0,4,1));
    for (size_t i = 0; i < 8; i++) {
        cells[1][i].setPiece(new Pawn(1,i,1));
    }
}

void Board::print(){
    for (size_t i = 0; i < 8; i++) {
        std::cout << setw(20);
        for (size_t j = 0; j < 8; j++) {
                if(cells[i][j].getPiece()== NULL) {
                    std::cout << "[" << "  " << "]" ;
                } else {
                    std::cout <<  "[" << cells[i][j].getPiece()->getFigure();
                    std::cout << cells[i][j].getPiece()->getColour() << "]";
            }
        }
    std::cout << "\n";
    }
}

Cell Board::getCell(unsigned short x, unsigned short y) {
    return cells[x][y];
}

bool Board::valid(unsigned short x0, unsigned short y0, unsigned short x, unsigned short y){
    if (x0 == x && y0 == y
        || x0 > 7 && y0 > 7
        || x > 7 && y > 7
        || !getCell(x0,y0)->valid(x,y)
        || getCell(x0,y0)->isEmpty()){
            return false;
    }
    return true;
}
