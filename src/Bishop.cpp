#include "Bishop.h"

Bishop::Bishop(){}
Bishop::Bishop(int x, int y, bool colour) : Piece(x,y, colour){
    figure = 'B';
}
