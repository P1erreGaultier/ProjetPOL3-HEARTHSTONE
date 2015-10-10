/**
* Fichier Pretre.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef Pretre_HPP
#define Pretre_HPP

#include <string> // pour le type std::string
#include "Joueur.hpp"
#include "../../Controleur/ComportementPouvoir/ComportementPouvoirPretre.hpp"


/******************************************************************************/

class Pretre: public Joueur
{   

   public :
      //Constructeur/Destructeur
      Pretre(std::string nom, std::string fichier);
      ~Pretre();
   
  
};

#include "../../../src/Modele/Joueur/Pretre.cpp"

#endif // Pretre_HPP
