#include "Board.h"

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
    print();
    deadKing = false;
}

bool Board::isTheKingDead(){
    return deadKing;
}

void Board::print(){
    std::cout << setw(20) << "  " << " 0 " <<"  1 "<< "  2 "<< "  3 "<<"  4 "<< "  5 "<< "  6 "<< "  7 " << '\n';
    for (size_t i = 0; i < 8; i++) {
        std::cout << setw(20) << i;
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
    if ((x0 == x && y0 == y)    // Keeps in place
        || (x0 > 7 || y0 > 7)   // Out of board from origin
        || (x > 7 || y > 7)     // Out of board
        || (getCell(x0,y0).isEmpty())   // Origin not empty
        || (!getCell(x,y).isEmpty() && (getCell(x0,y0).getPiece()->getColour()  == getCell(x,y).getPiece()->getColour()))
        || (!getCell(x0,y0).getPiece()->valid(x,y))
        || (thereIsCollision(x0,y0,x,y))){
            std::cout << "INCORRECT MOVEMENT" << '\n';
            return false;
    }
    return true;
}

void Board::moveOnBoard (unsigned short x0, unsigned short y0,unsigned short x, unsigned short y){
    if (!getCell(x,y).isEmpty() && this->cells[x][y].getPiece()->getFigure() == 'K') {
        deadKing = true;
    }
    this->cells[x0][y0].getPiece()->move(x,y);
    this->cells[x][y].setPiece(this->cells[x0][y0].getPiece());
    this->cells[x0][y0].setCellToNull();

    print();
}

bool Board::thereIsCollision(unsigned short x0, unsigned short y0, unsigned short x, unsigned short y){
  switch(cells[x0][y0].getPiece()->getFigure()){
    case 'P':
        if ((x == (x0 + 1) && y == y0) || (x == (x0 - 1) && y == y0)) {
            if (!getCell(x,y).isEmpty()){
                std::cout << "THERE IS COLLISION" << '\n';
                return true;
            }
        }
        return false;
    case 'K':
          return false;
    case 'Q':
        if (x < x0 && y > y0){  //First quadrant
            unsigned short move = (x0-x);
            for (unsigned short i = 0; i < move-1; i++) {
                x0--;
                y0++;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if (x < x0 && y < y0){  //Second quadrant
            unsigned short move=(x0-x);
            for (unsigned short i = 0; i < move-1; i++) {
                x0--;
                y0--;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if (x > x0 && y < y0){  //Third quadrant
            unsigned short move=(x-x0);
            for (unsigned short i = 0; i < move-1; i++) {
                x0++;
                y0--;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if (x > x0 && y > y0){   //Fourth quadrant
            unsigned short move=(x-x0);
            for (unsigned short i = 0; i < move-1; i++) {
                x0++;
                y0++;
            if (!getCell(x0,y0).isEmpty()){
                std::cout << "THERE IS COLLISION" << '\n';
                return true;
            }
        }
        return false;
        }
        if(x0 < x && y0 == y){ // Move down.
            unsigned short move = x-x0;
            for (unsigned short i=0; i<move-1; i++){
                x0++;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if(x0 > x && y0 == y){ // Move up.
            unsigned short move = x0-x;
            for (unsigned short i=0; i<move-1; i++){
                x0--;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if(x0 == x && y0 < y){ // Move to the right.
            unsigned short move = y-y0;
            for (unsigned short i=0; i<move-1; i++){
                y0++;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if(x0 == x && y0 > y){ // Move to the left.
            unsigned short move = y0-y;
            for (unsigned short i=0; i<move-1; i++){
                y0--;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
    case 'B':
        if (x < x0 && y > y0){  //First quadrant
            unsigned short move = (x0-x);
            for (unsigned short i = 0; i < move-1; i++) {
                x0--;
                y0++;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if (x < x0 && y < y0){  //Second quadrant
            unsigned short move=(x0-x);
            for (unsigned short i = 0; i < move-1; i++) {
                x0--;
                y0--;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }

        if (x > x0 && y < y0){  //Third quadrant
            unsigned short move=(x-x0);
            for (unsigned short i = 0; i < move-1; i++) {
                x0++;
                y0--;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if (x > x0 && y > y0){   //Fourth quadrant
            unsigned short move=(x-x0);
            for (unsigned short i = 0; i < move-1; i++) {
                x0++;
                y0++;
            if (!getCell(x0,y0).isEmpty()){
                std::cout << "THERE IS COLLISION" << '\n';
                return true;
            }
        }
            return false;
        }
    case 'R':
        if(x0 < x && y0 == y){ // Move down.
            unsigned short move = x-x0;
            for (unsigned short i=0; i<move-1; i++){
                x0++;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if(x0 > x && y0 == y){ // Move up.
            unsigned short move = x0-x;
            for (unsigned short i=0; i<move-1; i++){
                x0--;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if(x0 == x && y0 < y){ // Move to the right.
            unsigned short move = y-y0;
            for (unsigned short i=0; i<move-1; i++){
                y0++;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
        if(x0 == x && y0 > y){ // Move to the left.
            unsigned short move = y0-y;
            for (unsigned short i=0; i<move-1; i++){
                y0--;
                if (!getCell(x0,y0).isEmpty()){
                    std::cout << "THERE IS COLLISION" << '\n';
                    return true;
                }
            }
            return false;
        }
    case 'k':
          return false;
    default:
          return false;
  }

}

array<array<Cell, 8>, 8> Board::getBoard() {
    return cells;
}

void Board::setBoard(array<array<Cell, 8>, 8> board){
    cells = board;
}

vector<Piece*> Board::piecesOnBoard(array<array<Cell, 8>, 8> cells){
    std::vector<Piece*> pieces;
    for (size_t i = 0; i < 8; i++) {
        for (size_t j = 0; j < 8; j++) {
            if (!cells[i][j].isEmpty()) {
                pieces.push_back(cells[i][j].getPiece());
            }
        }
    }
    return pieces;
}
