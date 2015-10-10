/**
* Fichier Mage.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef Mage_HPP
#define Mage_HPP

#include <string> // pour le type std::string
#include "Joueur.hpp"
#include "../../Controleur/ComportementPouvoir/ComportementPouvoirMage.hpp"


/******************************************************************************/

class Mage: public Joueur
{   
   public :
      //Constructeur/Destructeur
      Mage(std::string nom, std::string fichier);
      ~Mage();
   
  
};

#include "../../../src/Modele/Joueur/Mage.cpp"

#endif // Mage_HPP
