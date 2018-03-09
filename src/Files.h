#ifndef FILES_H_
#define FILES_H_

#include <vector>
#include <iostream>
#include <fstream>
#include "Board.h"

using namespace std;

class Files{
public:
    static void save(std::string name);
    static void load(const char* name);
};


#endif
