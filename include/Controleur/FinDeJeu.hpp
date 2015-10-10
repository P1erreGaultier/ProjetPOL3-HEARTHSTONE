/**
* Fichier FinDeJeu.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef FinDeJeu_HPP
#define FinDeJeu_HPP
#include <string> // pour le type std::string
#include "Observer.hpp"
#include "Sujet.hpp"
#include "Jeu.hpp"



/******************************************************************************/

class FinDeJeu : public Observer
{

	private:
		Jeu* suj;
		int pdvJ1;
		int pdvJ2;
		bool JeuTermine;
		
		
	
	public:
		
		FinDeJeu(Jeu* j);
		~FinDeJeu();
		bool actualiser();
		
		
		
		
};

#include "../../src/Controleur/FinDeJeu.cpp"
#endif // Observer_HPP		
