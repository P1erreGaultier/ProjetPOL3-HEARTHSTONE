/**
* Fichier ComportementPouvoirDemoniste
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef COMPORTEMENTPOUVOIRDEMONISTE_HPP
#define COMPORTEMENTPOUVOIRDEMONISTE_HPP

#include <string> // pour le type std::string
#include "ComportementPouvoir.hpp"
#include "../../Modele/Joueur/Joueur.hpp"

/******************************************************************************/

class ComportementPouvoirDemoniste : public ComportementPouvoir
{

   private:
	Joueur* joueur;

   public :
	  ComportementPouvoirDemoniste(Joueur* j);
	  ~ComportementPouvoirDemoniste();
	  void pouvoir();
	
};

#include "../../../src/Controleur/ComportementPouvoir/ComportementPouvoirDemoniste.cpp"
#endif // ComportementPouvoirDemoniste_HPP
