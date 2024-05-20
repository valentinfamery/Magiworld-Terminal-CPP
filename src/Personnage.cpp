#include "Personnage.hpp"
#include <iostream>
#include <string>

    Personnage::Personnage(int niveau, int force,int agilite,int intelligence ,int playerNumber){
      this->niveau = niveau;
      this->vie = niveau * 5;
      this->force = force;
      this->agilite = agilite;
      this->intelligence = intelligence;
      this->playerNumber = playerNumber;
    }

    Personnage::Personnage(){}


    void Personnage::removeLife(int damage){
          std::cout << "Joueur " << playerNumber << " perd " << damage <<" points de vie";
         vie = vie - damage;
         if (vie <= 0){
             std::cout << "Joueur " << playerNumber << " est mort";
         }

    }

    void Personnage::addLife(int health){
       std::cout << "Joueur " << playerNumber << " utilise Soin et gagne " << health << " en vitalité.";
      vie = vie + health;
    }

    void Personnage::addAgility(int agility){
       std::cout << "Joueur " << playerNumber << " utilise Concentration et gagne " << agility << " en agilité.";
      agilite = agilite + agility;
    }

     std::string Personnage::cri(){
      return " je suis le Joueur " +  std::to_string(playerNumber) + " niveau " +  std::to_string(niveau) + " je possède " +  std::to_string(vie) + " de vitalité, " +  std::to_string(force) + " de force, " +  std::to_string(agilite) + " d'agilité et " +  std::to_string(intelligence) + " d'intélligence !";
    }

    void Personnage::attackBase(Personnage &p) {std::cout << " attachBasePersonnage";};

    void Personnage::attackSpecial(Personnage &p){std::cout << " attachSpecialPersonnage";};



