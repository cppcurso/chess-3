#include "Piece.h"



Piece::Piece() {}

std::string Piece::getColour(){
  if(black) {
      return "Black";
  }else {
      return "White";
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

void Piece::move (int x, int y){
    this->x = x;
    this->y = y;
}
