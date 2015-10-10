/**
* Fichier ComportementPouvoirMage
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef COMPORTEMENTPOUVOIRMAGE_HPP
#define COMPORTEMENTPOUVOIRMAGE_HPP

#include <string> // pour le type std::string
#include "ComportementPouvoir.hpp"
#include "../../Vue/VueConsole.hpp"
#include "../../Modele/Joueur/Joueur.hpp"

/******************************************************************************/

class ComportementPouvoirMage : public ComportementPouvoir
{

   private:
	Joueur* joueur;
	VueConsole* vue;

   public :
	  ComportementPouvoirMage(Joueur* j);
	  ~ComportementPouvoirMage();
	  void pouvoir();
	
};

#include "../../../src/Controleur/ComportementPouvoir/ComportementPouvoirMage.cpp"
#endif // ComportementPouvoirMage_HPP
