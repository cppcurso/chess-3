#include "Chess.h"
#include <iomanip>

unsigned short Chess::charToShort(char letter){
    switch (letter) {
        case'0':
        return 0;
        case '1':
        return 1;
        case '2':
        return 2;
        case '3':
        return 3;
        case '4':
        return 4;
        case '5':
        return 5;
        case '6':
        return 6;
        case '7':
        return 7;
        //return 20 para forzar el error de movimiento
        //si el valor introducido no corresponde al tablero
        default:
        return 20;
    }
}

void Chess::start() {
    std::cout << "Colocando las piezas..." << '\n';
    checkMate = false;
    turnNumber = 0;
}


void Chess::turn() {
    if (turnNumber % 2 == 0) {
        std::cout << "Mueve jugador 1" << '\n';
        blackTurn=false;
    } else {
        std::cout << "Mueve jugador 2" << '\n';
        blackTurn=true;
    }

    turnNumber++;

    if (turnNumber == 10) {
        checkMate = true;
    }
}
void Chess::moveAsk() {
    bool isValid=false;
    bool isBlack=false;
    std::string piecexy;
    std::string coord;
    do{
    std::cout << "Ficha que quieres mover" << '\n';
    cin>>piecexy;
    std::cout << "Donde quieres moverla" << '\n';
    cin>>coord;
    isValid=Board::getInstance().valid(charToShort(piecexy[0]),charToShort(piecexy[1]),charToShort(coord[0]),charToShort(coord[1]));
    isBlack=Board::getInstance().getCell(charToShort(piecexy[0]),charToShort(piecexy[1])).getPiece()->black;
    if (isBlack!=blackTurn){
        std::cout <<setw(50)<<"Esta ficha no es de tu color" << '\n';
    }
}while(!isValid || (isBlack!=blackTurn));

    Board::getInstance().moveOnBoard(charToShort(piecexy[0]),charToShort(piecexy[1]),charToShort(coord[0]),charToShort(coord[1])); // Pawn1
}

bool Chess::end() {
    std::cout << "Comprobando jaque mate..." << '\n';
    return checkMate;
}

void Chess::finish() {
    std::cout << "Jugador 1 ha ganado!" << '\n';
}
