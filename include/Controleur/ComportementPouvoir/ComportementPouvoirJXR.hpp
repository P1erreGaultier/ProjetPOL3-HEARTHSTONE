/**
* Fichier ComportementPouvoirJXR
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef COMPORTEMENTPOUVOIRJXR_HPP
#define COMPORTEMENTPOUVOIRJXR_HPP

#include <string> // pour le type std::string
#include "ComportementPouvoir.hpp"
#include "../../Vue/VueConsole.hpp"
#include "../../Modele/Joueur/Joueur.hpp"

/******************************************************************************/

class ComportementPouvoirJXR : public ComportementPouvoir
{

   private:
	Joueur* joueur;
	VueConsole* vue;

   public :
	  ComportementPouvoirJXR(Joueur* j);
	  ~ComportementPouvoirJXR();
	  void pouvoir();
	
};

#include "../../../src/Controleur/ComportementPouvoir/ComportementPouvoirJXR.cpp"
#endif // ComportementPouvoirJXR_HPP
