#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{
    public:
      int niveau, vie, force, agilite, intelligence , playerNumber;

    Personnage(int niveau, int force,int agilite,int intelligence ,int playerNumber){
      this->niveau = niveau;
      this->vie = niveau * 5;
      this->force = force;
      this->agilite = agilite;
      this->intelligence = intelligence;
      this->playerNumber = playerNumber;
    }

    Personnage(){};

    void removeLife(int damage);
    void addLife(int health);
    void addAgility(int agility);
    std::string cri();
    void attackBase(Personnage p){};
    void attackSpecial(Personnage p){};

    
};

#endif

