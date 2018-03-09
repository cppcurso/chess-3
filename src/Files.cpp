#include "Files.h"

void Files::save(std::string name) {
    std::vector<Piece*> pieces;
    pieces=Board::getInstance().piecesOnBoard(Board::getInstance().getBoard());
    ofstream file(name, ios::binary);
    for (size_t i = 0; i < pieces.size(); i++) {
        file.write((char*) *(&pieces[i]), sizeof(Piece));
    }
}



void Files::load(const char* name) { // data es un parámetro de salida
    ifstream file(name, ios::binary);
    Piece* piece= new Pawn(0,0,true);
    file.read((char *) piece, sizeof(piece));
    std::cout << piece->getFigure() << '\n';

}
