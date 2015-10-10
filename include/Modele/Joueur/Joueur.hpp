/**
* Fichier Joueur.hpp
* @author Pierre Gaultier &  Theo Dolez
*/

#ifndef Joueur_HPP
#define Joueur_HPP
#include <string> // pour le type std::string
#include <list>
#include <vector>
#include "Deck/Deck.hpp"
#include "../../Controleur/ComportementPouvoir/ComportementPouvoir.hpp"



int const tailleMain(8);
int const tailleBoard(8);
int const pdvmax(30);
/******************************************************************************/

class Joueur
{
	private:
		int pdv;
    	int armure;
    	int pdm;
    	int pdmTour;
		int pdvmax;
		bool pouvoirUtilise;
	 	ComportementPouvoir* CP;
		Deck* d;
		std::vector<Carte>* main;
		std::vector<Carte>* board;
		std::string nom;
		Joueur* joueurAutre;
	
	public:
		
		Joueur(std::string nom,std::string fichier);
		~Joueur();
		
		//Getters/Setters des caracteriqtique du personnage
		int getPdv();
     		int getArmure();
		void setARMURE(int arm);
      		int getPdm();
      		void setPDM(int npdm);
      		int getPdmTour();
      		void setPDMTour(int npdmt);
		void setPDV(int npdv);
		
		//Nom du Joueur
		std::string getNom();
		void setNom(std::string n);
		
		//Adversaire
		Joueur* getJoueurAutre();
      		void setJoueurAutre(Joueur* j);
     
		//Pouvoir heroique
		ComportementPouvoir* getCP();
    		void setCP(ComportementPouvoir* CP);
    		std::string toString();
		void utiliserPouvoir(); 
		bool getPouvoirUtilise();
		void setPouvoirUtilise(bool p);
		Deck* getDeck();	

		//Main/Deck/Board
		std::vector<Carte>* getMain();		
		std::vector<Carte>* getBoard();		
		bool ajouterMain(Carte c); // renvoie vrai si l'opération a réussie
		bool ajouterBoard(Carte c); // renvoie vrai si l'opération a réussie
		bool supprimerMain(int index);
		bool supprimerBoard(int index);
		std::string afficherMain();
		std::string afficherBoard();	
};

#include "../../../src/Modele/Joueur/Joueur.cpp"

#endif // JOUEUR_HPP		
