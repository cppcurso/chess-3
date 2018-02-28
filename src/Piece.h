#ifndef PIECE_H_
#define PIECE_H_

#include<iostream>



class Piece {
protected:
    int x, y;
    bool black;
    char figure;
public:
    //Piece();
    Piece(int x, int y , bool colour = true);
    std::string getColour();
    std::string getName();
    void move (int x, int y);
    // TO DO virtual bool valid (int x, int y) = 0;
};


#endif
