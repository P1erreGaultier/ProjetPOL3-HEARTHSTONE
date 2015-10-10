/*
* Fichier VueConsole.hpp
* @author Pierre Gaultier & Theo Dolez
*/



#ifndef VueConsole_HPP
#define VueConsole_HPP
#include <string> // pour le type std::string
#include "../Modele/Joueur/Joueur.hpp"




/******************************************************************************/

class VueConsole
{


	private:

 
	
	public:
		VueConsole();
		~VueConsole();
		
		// fonctions d'entrées
		int getChoixJoueur();
		string getNomJoueur();

		// fonctions de sorties
		void afficherMain(Joueur* j);
		void afficherChoix();
		void afficherChoixDebutTour();
		void afficherChoixNoMana();
		void afficherChoixNoAttaque();
		void afficherChoixDoubleNo();
		void afficherChoixCvC();
		void afficherChoixCvJ();
		void afficherBoard(Joueur* j);
		void afficher2Board(Joueur* j1, Joueur* j2);
		void afficherPersonnage(Joueur* j);
		void afficherPersonnageAutre(Joueur* j);
		void afficherDebutTour(Joueur* j);
		void afficherFinTour();
		void afficherJouerCarte();
		void afficherPdmnRestant(int i);
		void afficherPasAssezDeMana();
		void afficherChoixPouvoirMage();
		void afficherChoixPouvoirPretre();
		void afficherChoixPouvoirInduction();
		void afficherChoixCarte();
		void afficherErreurChoix();
		void afficherPasDeCarteAdverse();
		void afficherPasDeCarteBoard();
		void afficherIntro();
		void afficherFinIntro();
		
};
#include "../../src/Vue/VueConsole.cpp"
#endif // JEU_HPP		
