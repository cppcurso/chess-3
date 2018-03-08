#include "Board.h"
#include <vector>

class Record {
    std::vector<array<array<Cell, 8>, 8>> boards;
public:
    Record ();
    void saveBoard(array<array<Cell, 8>, 8> cells);
    std::vector<array<array<Cell, 8>, 8>> getBoards();
    void show(array<array<Cell, 8>, 8> boardTemp, int i);
    //
};
