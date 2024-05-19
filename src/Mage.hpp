#ifndef DEF_MAGE
#define DEF_MAGE

#include "Personnage.hpp"
#include <iostream>
#include <string>


class Mage : public Personnage {
  
    

  public:
    int defaultLife;

    Mage(int niveau, int force, int agilite, int intelligence, int playerNumber);
        
    std::string cri();
    void attackBase(Personnage p);
    void attackSpecial(Personnage p);

};

#endif