/**
* Fichier Etat.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef ETAT_HPP
#define ETAT_HPP
#include <string> // pour le type std::string




/******************************************************************************/

class Etat
{

	private:
		
	
	public:
		virtual ~Etat(){};
		void virtual finTour()= 0;
		int virtual afficherChoixEtat()= 0;
		
		
		
		
};

#endif // Etat_HPP		
