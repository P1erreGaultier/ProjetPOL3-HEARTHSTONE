/**
* Fichier Jeu.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef Jeu_HPP
#define Jeu_HPP
#ifdef __cplusplus__
#include <cstdlib>
#else
#include <stdlib.h>
#endif
#include <vector>
#include <string> // pour le type std::string
#include "../Modele/Joueur/Joueur.hpp"
#include "ComportementPouvoir/ComportementPouvoirGuerrier.hpp"
#include "../Modele/Joueur/Guerrier.hpp"
#include "ComportementPouvoir/ComportementPouvoirChasseur.hpp"
#include "../Modele/Joueur/Chasseur.hpp"
#include "ComportementPouvoir/ComportementPouvoirMage.hpp"
#include "../Modele/Joueur/Mage.hpp"
#include "ComportementPouvoir/ComportementPouvoirDemoniste.hpp"
#include "../Modele/Joueur/Demoniste.hpp"
#include "ComportementPouvoir/ComportementPouvoirPretre.hpp"
#include "../Modele/Joueur/Pretre.hpp"
#include "ComportementPouvoir/ComportementPouvoirJXR.hpp"
#include "../Modele/Joueur/JXR.hpp"
#include "../Vue/VueConsole.hpp"
#include "Sujet.hpp"
#include "Observer.hpp"


class Etat;
class EtatDebutTour;
class EtatNoMana;
class EtatNoAttaque;
class EtatDoubleNo;
/******************************************************************************/

class Jeu : public Sujet
{


	private:
		Joueur* joueurCourant;
		Joueur* joueurAutre;
		Etat* etatCourant;
		EtatDebutTour* etatDebutTour;
		EtatNoMana* etatNoMana;
		EtatNoAttaque* etatNoAttaque;
		EtatDoubleNo* etatDoubleNo;
		VueConsole* vue;
		vector<Observer*>* obs;     

 
	
	public:
		Jeu(Joueur* j1,Joueur* j2);
		~Jeu();
		
		// Getters/Setters
		Joueur* getJoueurCourant();
		Joueur* getJoueurAutre();
		Etat* getEtatCourant();
		Etat* getEtatNoMana();
		Etat* getEtatNoAttaque();
		Etat* getEtatDoubleNo();
		Etat* getEtatDebutTour();
		void setEtat(Etat* e); 
		VueConsole* getVue();

		
		// méthodes d'attaque/test/changement d'état 
		void attaqueCvC(int index1, int index2);
		void attaqueCvJ(int index);
		void enleverMalinvoc();
		bool testNoMana();
		bool testProvoc();
		bool testNoAttaque();
		void echangeJoueur(); 
		void finTour();

		// méthode qui lance le jeu 
		void jouer();

		// méthodes liés aux Observers
		void enregistrerObs(Observer* O);
		void supprimerObs(Observer* O);
		bool notifierObs();

		// méthode destinée aux sortilèges
		void fonctionsCarte(int f);
		
		
		
		
};


#include "Etat.hpp"
#include "EtatDebutTour.hpp"
#include "EtatNoMana.hpp"
#include "EtatNoAttaque.hpp"
#include "EtatDoubleNo.hpp"
#include "../../src/Controleur/Jeu.cpp"
#endif // JEU_HPP		
