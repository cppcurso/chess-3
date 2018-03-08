#include "Record.h"

Record::Record(){}

void Record::saveBoard(array<array<Cell, 8>, 8> cells){
    boards.push_back(cells);
}
std::vector<array<array<Cell, 8>, 8>> Record::getBoards() {
    return boards;
}
void Record::show(array<array<Cell, 8>, 8> boardTemp, int i){
    std::cout << "Round " << i+1 << ":" << '\n';
    std::cout << setw(20) << "  " << " 0 " <<"  1 "<< "  2 "<< "  3 "<<"  4 "<< "  5 "<< "  6 "<< "  7 " << '\n';
    for (size_t i = 0; i < 8; i++) {
        std::cout << setw(20) << i;
        for (size_t j = 0; j < 8; j++) {
                if(boardTemp[i][j].getPiece()== NULL) {
                    std::cout << "[" << "  " << "]" ;
                } else {
                    std::cout <<  "[" << boardTemp[i][j].getPiece()->getFigure();
                    std::cout << boardTemp[i][j].getPiece()->getColour() << "]";
            }
        }
    std::cout << "\n";
    }
}
