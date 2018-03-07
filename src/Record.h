#include "Board.h"
#include <stack>

class Record {
    friend class Board;
    std::stack<array<array<Cell, 8>, 8>> boards;
public:
    Record ();
    void saveBoard(array<array<Cell, 8>, 8> cells);
    array<array<Cell, 8>, 8> goBack();
};
