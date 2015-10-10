/**
* Fichier Sujet.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef Sujet_HPP
#define Sujet_HPP
#include <string> // pour le type std::string
#include "Observer.hpp" 



/******************************************************************************/

class Sujet
{

	private:
		
	
	public:
		virtual ~Sujet(){};
		void virtual enregistrerObs(Observer* O)= 0;
		void virtual supprimerObs(Observer* O)= 0;
		bool virtual notifierObs()= 0;
		
		
		
		
};

#endif // Observer_HPP		
