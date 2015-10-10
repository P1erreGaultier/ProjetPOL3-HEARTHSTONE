/**
* Fichier EtatDoubleNo.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef EtatDoubleNo_HPP
#define EtatDoubleNo_HPP
#include <string> // pour le type std::string
#include "Etat.hpp"


/******************************************************************************/
class Jeu;

class EtatDoubleNo : public Etat
{

	protected:
		Jeu* jeu;	

	public:
		
		EtatDoubleNo(Jeu* j);
		~EtatDoubleNo();

		Jeu* getJeu();
		int afficherChoixEtat();
		void finTour();
		
		
		
		
};

#include "Jeu.hpp"
#include "../../src/Controleur/EtatDoubleNo.cpp"
#endif // EtatDoubleNo_HPP		
