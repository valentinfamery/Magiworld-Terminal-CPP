#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{
    public:
      int niveau, vie, force, agilite, intelligence , playerNumber;

    

    Personnage(int niveau, int force,int agilite,int intelligence ,int playerNumber);
    Personnage();

    void removeLife(int damage);
    void addLife(int health);
    void addAgility(int agility);
    std::string cri();
    virtual void attackBase(Personnage &p);
    virtual void attackSpecial(Personnage &p);

    
};

#endif

