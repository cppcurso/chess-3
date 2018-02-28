#ifndef PIECE_H_
#define PIECE_H_

#include<iostream>



class Piece {
protected:
    int x, y;
    bool black;
    char figure;
public:
    Piece();
    std::string getColour();
    std::string getName();
    void move (int x, int y);
    virtual bool valid (int x, int y) = 0;
};


#endif
