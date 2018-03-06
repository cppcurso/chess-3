#include "Game.h"


void Game::play(){
   start();
   while (!end()) {
       turn();
       moveAsk();
   }
   finish();
}
