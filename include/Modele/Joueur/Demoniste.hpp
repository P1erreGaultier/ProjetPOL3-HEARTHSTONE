/**
* Fichier Demoniste.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef DEMONISTE_HPP
#define GUERRIER_HPP

#include <string> // pour le type std::string
#include "Joueur.hpp"
#include "../../Controleur/ComportementPouvoir/ComportementPouvoirDemoniste.hpp"


/******************************************************************************/

class Demoniste: public Joueur
{   

   public :
      //Constructeur/Destructeur
      Demoniste(std::string nom, std::string fichier);
      ~Demoniste();
   
  
};

#include "../../../src/Modele/Joueur/Demoniste.cpp"

#endif // Demoniste_HPP
