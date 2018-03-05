#include<iostream>
#include<string>


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
    bool valid (int x, int y);
};
