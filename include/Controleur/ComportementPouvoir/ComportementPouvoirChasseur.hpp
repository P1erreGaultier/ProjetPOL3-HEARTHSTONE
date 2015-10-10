/**
* Fichier ComportementPouvoirChasseur
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef COMPORTEMENTPOUVOIRCHASSEUR_HPP
#define COMPORTEMENTPOUVOIRCHASSEUR_HPP

#include <string> // pour le type std::string
#include "ComportementPouvoir.hpp"
#include "../../Modele/Joueur/Joueur.hpp"

/******************************************************************************/

class ComportementPouvoirChasseur : public ComportementPouvoir
{

   private:
	Joueur* joueur;

   public :
	  ComportementPouvoirChasseur(Joueur* j);
	  ~ComportementPouvoirChasseur();
	  void pouvoir();
	
};

#include "../../../src/Controleur/ComportementPouvoir/ComportementPouvoirChasseur.cpp"
#endif // COMPORTEMENTPOUVOIRCHASSEUR_HPP
