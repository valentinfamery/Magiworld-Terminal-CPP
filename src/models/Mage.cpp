#include <iostream>
#include <string>
#include "Personnage.hpp"

class Mage : public Personnage {
  private:
    int defaultLife;

  public:
    Mage(int niveau, int force, int agilite, int intelligence, int playerNumber)
        : Personnage(niveau,force, agilite, intelligence, playerNumber), defaultLife(niveau * 5) {}

     std::string cri() {
      return "Abracadabra";
    }

    void attackBase(Personnage p){
      int damage = intelligence;
       std::cout << "Joueur " << playerNumber << " utilise Boule de Feu et inflige " << damage << " dommages.";
      p.removeLife(damage);
    }

    void attackSpecial(Personnage p){
      int health = intelligence * 2;
      if(vie + health >= defaultLife){
      health = defaultLife - vie;
      addLife(health);
      }
      else
      addLife(health);
    }
    
};