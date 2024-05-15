#include <iostream>
#include <string>
#include "Personnage.hpp"


class Guerrier : public Personnage {
  public:
    
    Guerrier(int niveau, int force, int agilite, int intelligence, int playerNumber)
        : Personnage(niveau,force, agilite, intelligence, playerNumber){}


    std::string cri() {
      return "Woarg";
    }

    void attackBase(Personnage p){
      int damage = force;
      std::cout << "Joueur " << playerNumber << " utilise Coup d'Epee et inflige " << damage << " dommages."; 
      p.removeLife(damage);
    }

    void attackSpecial(Personnage p){
      int damage = force * 2;
      int autoDamage = force / 2;
      std::cout << "Joueur " << playerNumber << " utilise Coup de rage et inflige " << damage << " dommages.";

      p.removeLife(damage);
      removeLife(autoDamage);
    }

};