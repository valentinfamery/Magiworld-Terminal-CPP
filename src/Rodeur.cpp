#include "Rodeur.hpp"
#include "Personnage.hpp"
#include <iostream>
#include <string>



    Rodeur::Rodeur(int niveau, int force, int agilite, int intelligence, int playerNumber)
        : Personnage(niveau,force, agilite, intelligence, playerNumber){}

     std::string Rodeur::cri() {
      return "Fsshhh";
    }

    void Rodeur::attackBase(Personnage &p){
      int damage = agilite;
       std::cout << "Joueur " << playerNumber << " utilise Tir à l'Arc et inflige " << damage << " dommages.";
      p.removeLife(damage);
    }

    void Rodeur::attackSpecial(Personnage &p){
      int agilityWon = niveau / 2;
      addAgility(agilityWon);
    }


