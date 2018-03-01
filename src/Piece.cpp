#include "Piece.h"



//Piece::Piece() {}

Piece::Piece(unsigned short x, unsigned short y , bool colour){
    this->x = x;
    this->y = y;
    this->black = colour;
}
std::string Piece::getColour(){
  if(black) {
      return "b";
  }else {
      return "w";
  }
}

std::string Piece::getName(){
    switch(figure){
        case 'P':
            return "pawn";
        case 'K':
            return "king";
        case 'Q':
            return "queen";
        case 'B':
            return "bishop";
        case 'R':
            return "rook";
        case 'k':
            return "knight";
        default:
            return "";
  }
}

void Piece::move (unsigned short x, unsigned short y){
    this->x = x;
    this->y = y;
}
char Piece::getFigure(){
    return figure;
}
