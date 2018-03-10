#include "Game.h"


void Game::play(){
   start();
   while (!end()&&power) {
       turn();
       moveAsk();
   }
   if(!power){
       Files::save("SavedGame");
   }else{
       finish();
   }


}
