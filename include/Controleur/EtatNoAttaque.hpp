/**
* Fichier EtatNoAttaque.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef EtatNoAttaque_HPP
#define EtatNoAttaque_HPP
#include <string> // pour le type std::string
#include "Etat.hpp"


/******************************************************************************/
class Jeu;

class EtatNoAttaque : public Etat
{

	protected:
		Jeu* jeu;	

	public:
		
		EtatNoAttaque(Jeu* j);
		~EtatNoAttaque();

		Jeu* getJeu();
		int afficherChoixEtat();
		void finTour();
		
		
		
		
};

#include "Jeu.hpp"
#include "../../src/Controleur/EtatNoAttaque.cpp"
#endif // EtatNoAttaque_HPP		
