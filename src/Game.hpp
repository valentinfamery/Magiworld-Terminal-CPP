#ifndef Game_hpp
#define Game_hpp
#include <string>
#include "Personnage.hpp"

class Game {
    public:
      Personnage* player1;
      Personnage* player2;
      int classe, niveau, force, agilite, intelligence;

      Game();
      ~Game();

      Personnage* createPlayer(int playerNumber);
      Personnage* instanciationPersonnage(int classe, int niveau, int force, int agilite, int intelligence, int playerNumber);
      void start();
      void Turn(Personnage &attack, Personnage &defend);

};

#endif