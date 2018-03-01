#ifndef PIECE_H_
#define PIECE_H_

#include<iostream>



class Piece {
protected:
    unsigned short x, y;
    bool black;
    char figure;
public:
    //Piece();
    Piece(unsigned short x, unsigned short y , bool colour = true);
    std::string getColour();
    std::string getName();
    char getFigure();
    void move (unsigned short x, unsigned short y);
    // TO DO virtual bool valid (unsigned short x, unsigned short y) = 0;
};
/* TO DO
board.cells[1][5].getPiece()->move(6,5);
board.cells[6][5].setPointerToPiece(*(board.cells[1][5].getPiece()));
board.cells[1][5].setCellToNull();
board.print();
//std::cout << board.cells[6][5].getPiece()->x;
//std::cout << board.cells[6][5].getPiece()->y;*/

#endif
