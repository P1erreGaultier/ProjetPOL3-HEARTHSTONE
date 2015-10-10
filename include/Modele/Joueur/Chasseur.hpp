/**
* Fichier Chasseur.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef Chasseur_HPP
#define Chasseur_HPP

#include <string> // pour le type std::string
#include "Joueur.hpp"
#include "../../Controleur/ComportementPouvoir/ComportementPouvoirChasseur.hpp"


/******************************************************************************/

class Chasseur: public Joueur
{   
    
   public :
	//Constructeur/Destructeur
	Chasseur(std::string nom, std::string fichier);
	~Chasseur();
   
  
};

#include "../../../src/Modele/Joueur/Chasseur.cpp"

#endif // Chasseur_HPP
