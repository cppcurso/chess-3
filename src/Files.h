#ifndef FILES_H_
#define FILES_H_

#include <vector>
#include <iostream>
#include <fstream>
#include "Board.h"

class Files{
public:
    void save(std::string name, std::vector<Piece*> pieces);
    //void load(const char* name, T& data);
};


#endif
