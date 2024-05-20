#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include "Personnage.hpp"
#include <iostream>
#include <string>



class Guerrier : public Personnage {
  public:
    
    Guerrier(int niveau, int force, int agilite, int intelligence, int playerNumber);
    std::string cri();
    void attackBase(Personnage &p);
    void attackSpecial(Personnage &p);
};

#endif