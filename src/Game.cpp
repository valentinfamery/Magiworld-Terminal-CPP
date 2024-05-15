#include <iostream>
#include <string>
#include "models/Personnage.hpp"
#include "models/Guerrier.cpp"
#include "models/Mage.cpp"
#include "models/Rodeur.cpp"

class Game {
    public:
      Personnage player1;
      Personnage player2;
      int classe, niveau, force, agilite, intelligence;

      Game(){
        this->player1 = createPlayer(1);
        this->player2 = createPlayer(2);
      }

      Personnage createPlayer(int playerNumber){
         std::cout << "Création du personnage du Joueur " << playerNumber;
     
      do {
        classe = 0;
         std::cout << "Veuillez choisir la classe du personnage (1 : Guerrier, 2 : Rôdeur, 3 : Mage";
        try {
             std::cin >> classe;

            if ( std::cin.fail()) {
            // If input operation failed due to non-integer input
              throw std::runtime_error("Veuillez saisir un nombre !");
            }
            

        } catch(const std::exception& e) {
             std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    } while (!(classe == 1 || classe == 2 || classe == 3));





      do {
         std::cout << "Niveau du personnage ?";
         std::cin >> niveau;

         std::cout << "Force du personnage ?";
         std::cin >> force;

         std::cout << "Agilité du personnage ?";
         std::cin >> agilite;

         std::cout << "Intelligence du personnage ?";
         std::cin >> intelligence;

        if ((force + agilite + intelligence) > niveau)
           std::cout << "un Personnage niveau " << niveau << " ne peut pas avoir " << force << " de force" <<
                  " + " << agilite << " d'agilité + " << intelligence << " d’intelligence : le total doit faire " << niveau;

        }while ((force + agilite + intelligence) > niveau);

      return instanciationPersonnage(classe, niveau, force, agilite, intelligence, playerNumber);
    }

      Personnage instanciationPersonnage(int classe, int niveau, int force, int agilite, int intelligence, int playerNumber) {
        Personnage temp;
        switch (classe) {
          case 1:
            temp = Guerrier(niveau, force, agilite, intelligence, playerNumber);
            break;
          case 2:
            temp = Rodeur(niveau, force, agilite, intelligence, playerNumber);
            break;
          case 3:
            temp = Mage(niveau, force, agilite, intelligence, playerNumber);
            break;
        }
        return temp;
     
      }

      void start(){
      int turn = 1;
      while (player1.vie > 0 && player2.vie > 0){
        if(turn % 2 == 1){
          Turn(player1, player2);
        }else{
          Turn(player2, player1);
          }
          turn++;
        }
      if (player1.vie <= 0){
        std::cout << "Joueur 1 à perdu !";
      }else{
        std::cout << "Joueur 2 à perdu !";
      }
      }

      void Turn(Personnage attack, Personnage defend){
         std::cout << "Joueur " << attack.playerNumber << " (" + attack.vie << " de vitalité) veuillez choisir " << "votre action (1 : Attaque Basique, 2 : Attaque Spéciale)";
        int choix;
         std::cin >> choix;
        if (choix == 1)
          attack.attackBase(defend);
        else
          attack.attackSpecial(defend);
      }


};