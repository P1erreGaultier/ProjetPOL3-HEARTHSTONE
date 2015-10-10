#ifndef LANCEMENTPARTIE_HPP
#define LANCEMENTPARTIE_HPP

#include <string> // pour les chaines de caracteres
#include <iostream> // pour les entrées/sorties
#include <fstream> // pour la gestion des flux de fichier
#include <sstream> // pour la gestion des flux de string


#include "../Modele/Joueur/Joueur.hpp"
#include "Jeu.hpp"
#include "FinDeJeu.hpp"
#include "../Vue/VueConsole.hpp"
#include "Sujet.hpp"
#include "Observer.hpp"



class LancementPartie
{
	private:
		Joueur* j1;
		Joueur* j2;
		Jeu* jeu;
		FinDeJeu* ob;
		VueConsole vue;
		
	public: 
	
		LancementPartie();
		~LancementPartie();
		
		void lancerPartie();
		
		
};


#include "../../src/Controleur/LancementPartie.cpp"
#endif // LancementPartie_HPP		
