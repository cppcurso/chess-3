#include "Piece.h"


Knight::Knight(){}

Knight(int x, int y, bool colour) : Piece(x,y, colour) {
    figure = 'k';
}
