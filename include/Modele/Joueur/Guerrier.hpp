/**
* Fichier Guerrier.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef GUERRIER_HPP
#define GUERRIER_HPP

#include <string> // pour le type std::string
#include "Joueur.hpp"
#include "../../Controleur/ComportementPouvoir/ComportementPouvoirGuerrier.hpp"


/******************************************************************************/

class Guerrier: public Joueur
{   

   public :
      //Constructeur/Destructeur
      Guerrier(std::string nom, std::string fichier);
      ~Guerrier();
   
  
};

#include "../../../src/Modele/Joueur/Guerrier.cpp"

#endif // Guerrier_HPP
