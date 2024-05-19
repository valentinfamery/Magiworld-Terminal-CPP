#include "Guerrier.hpp"
#include "Personnage.hpp"
#include <iostream>
#include <string>

    Guerrier::Guerrier(int niveau, int force, int agilite, int intelligence, int playerNumber)
        : Personnage(niveau,force, agilite, intelligence, playerNumber){}


    std::string Guerrier::cri() {
      return "Woarg";
    }

    void Guerrier::attackBase(Personnage p){
      int damage = force;
      std::cout << "Joueur " << playerNumber << " utilise Coup d'Epee et inflige " << damage << " dommages."; 
      p.removeLife(damage);
    }

    void Guerrier::attackSpecial(Personnage p){
      int damage = force * 2;
      int autoDamage = force / 2;
      std::cout << "Joueur " << playerNumber << " utilise Coup de rage et inflige " << damage << " dommages.";

      p.removeLife(damage);
      removeLife(autoDamage);
    }

