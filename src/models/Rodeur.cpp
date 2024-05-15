#include <iostream>
#include <string>
#include "Personnage.hpp"

class Rodeur : public Personnage {
  public:
    Rodeur(int niveau, int force, int agilite, int intelligence, int playerNumber)
        : Personnage(niveau,force, agilite, intelligence, playerNumber){}


     std::string cri() {
      return "Fsshhh";
    }

    void attackBase(Personnage p){
      int damage = agilite;
       std::cout << "Joueur " << playerNumber << " utilise Tir à l'Arc et inflige " << damage << " dommages.";
      p.removeLife(damage);
    }

    void attackSpecial(Personnage p){
      int agilityWon = niveau / 2;
      addAgility(agilityWon);
    }

};
