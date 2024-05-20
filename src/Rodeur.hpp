#ifndef DEF_RODEUR
#define DEF_RODEUR

#include "Personnage.hpp"
#include <iostream>
#include <string>

class Rodeur : public Personnage {
  public:
    Rodeur(int niveau, int force, int agilite, int intelligence, int playerNumber);
       

    std::string cri();
    void attackBase(Personnage &p);
    void attackSpecial(Personnage &p);
};

#endif