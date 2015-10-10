/**
* Fichier EtatDebutTour.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef EtatDebutTour_HPP
#define EtatDebutTour_HPP
#include <string> // pour le type std::string
#include "Etat.hpp"


/******************************************************************************/
class Jeu;

class EtatDebutTour : public Etat
{

	protected:
		Jeu* jeu;	

	public:
		
		EtatDebutTour(Jeu* j);
		~EtatDebutTour();

		Jeu* getJeu();
		int afficherChoixEtat();
		void finTour();
		
		
		
		
};

#include "Jeu.hpp"
#include "../../src/Controleur/EtatDebutTour.cpp"
#endif // EtatDebutTour_HPP		
