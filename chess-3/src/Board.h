#include <iostream>

using namespace std;

class Board {
    Cell board[8][8];
public:
    void init(); // inicializar el tablero
    bool valid(/*xPos, yPos, Piece*/);
    void print();
    void move(/*xPos, yPos, Piece*/);
};