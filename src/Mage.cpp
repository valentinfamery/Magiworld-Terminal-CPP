#include <iostream>
#include <string>
#include "Personnage.hpp"
#include "Mage.hpp"

    Mage::Mage(int niveau, int force, int agilite, int intelligence, int playerNumber)
        : Personnage(niveau,force, agilite, intelligence, playerNumber), defaultLife(niveau * 5) {}

     std::string Mage::cri() {
      return "Abracadabra";
    }

    void Mage::attackBase(Personnage p){
      int damage = intelligence;
       std::cout << "Joueur " << playerNumber << " utilise Boule de Feu et inflige " << damage << " dommages.";
      p.removeLife(damage);
    }

    void Mage::attackSpecial(Personnage p){
      int health = intelligence * 2;
      if(vie + health >= defaultLife){
      health = defaultLife - vie;
      addLife(health);
      }
      else
      addLife(health);
    }
    
