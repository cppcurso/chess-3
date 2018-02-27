#include "Cell.h"


Cell::Cell () {
    piece = NULL;
}




bool Cell::isEmpty(){ return (piece == NULL) ? true : false ;}
