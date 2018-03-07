#include "Record.h"

void Record::saveBoard(array<array<Cell, 8>, 8> cells){
    boards.push(cells);
}

array<array<Cell, 8>, 8> Record::goBack() {
    return boards.top();
}
