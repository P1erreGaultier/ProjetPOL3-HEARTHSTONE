/**
* Fichier Observer.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef Observer_HPP
#define Observer_HPP
#include <string> // pour le type std::string




/******************************************************************************/

class Observer
{

	private:
		
	
	public:
		virtual ~Observer(){};
		bool virtual actualiser()= 0;
		
		
		
		
};

#endif // Observer_HPP		
