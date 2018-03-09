#include "Files.h"

void Files::save(std::string name, unsigned short length, std::vector<Piece> pieces) {
    ofstream file(name, ios::binary);
    for (size_t i = 0; i < length; i++) {
        file.write((char*) &pieces[i], sizeof(Piece));
    }
}

// template<typename T>
// void Files::load(const char* name, T& data) { // data es un parámetro de salida
//     ifstream file(name, ios::binary);
//     file.read((char *) &data, sizeof(T));
//}
