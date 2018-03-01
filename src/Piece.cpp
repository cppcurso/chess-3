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
      break;
    case 'K':
      return "king";
      break;
    case 'Q':
      return "queen";
      break;
    case 'B':
      return "bishop";
      break;
    case 'R':
      return "rook";
      break;
    case 'k':
      return "knight";
      break;
  }
}

void Piece::move (unsigned short x, unsigned short y){
    this->x = x;
    this->y = y;
}
char Piece::getFigure(){
    return figure;
}
