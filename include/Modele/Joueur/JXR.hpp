/**
* Fichier JXR.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef JXR_HPP
#define JXR_HPP

#include <string> // pour le type std::string
#include "Joueur.hpp"
#include "../../Controleur/ComportementPouvoir/ComportementPouvoirJXR.hpp"


/******************************************************************************/

class JXR: public Joueur
{   

   public :
      //Constructeur/Destructeur
      JXR(std::string nom, std::string fichier);
      ~JXR();
   
  
};

#include "../../../src/Modele/Joueur/JXR.cpp"

#endif // JXR_HPP
