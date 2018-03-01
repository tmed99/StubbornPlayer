#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int replay;
  int won = 0;
  cout<<"I wanna play a game. How many times would you like to play?";
  cin>> replay;
  
  for (int i = 0; i < replay; i ++)
  {
  game.newGame();
  game.guessDoorC();
  game.guessDoorC();
  if (game.isWinner() == true)
   {
   won += 1;
   }
  }
 
  cout<<"You have won the game "<<won<<" times.";
  
  return 0;
}
