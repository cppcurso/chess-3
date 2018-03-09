#ifndef PIECE_H_
#define PIECE_H_

#include<iostream>

class Piece {
friend class Board;
protected:
    unsigned short x, y;
    char figure;
public:
    bool black;
    Piece(unsigned short x, unsigned short y , bool colour = true);
    std::string getColour();
    std::string getName();
    char getFigure();
    virtual void move (unsigned short x, unsigned short y);
    virtual bool valid (unsigned short x, unsigned short y)=0;
};
#endif
