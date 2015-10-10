/**
* Fichier EtatNoMana.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef EtatNoMana_HPP
#define EtatNoMana_HPP
#include <string> // pour le type std::string
#include "Etat.hpp"


/******************************************************************************/
class Jeu;

class EtatNoMana : public Etat
{

	protected:
		Jeu* jeu;	

	public:
		
		EtatNoMana(Jeu* j);
		~EtatNoMana();

		Jeu* getJeu();
		int afficherChoixEtat();
		void finTour();
		
		
		
		
};

#include "Jeu.hpp"
#include "../../src/Controleur/EtatNoMana.cpp"
#endif // EtatNoMana_HPP		
