/**
* Fichier ComportementPouvoir
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef COMPORTEMENTPOUVOIR_HPP
#define COMPORTEMENTPOUVOIR_HPP

#include <string> // pour le type std::string



/******************************************************************************/

class ComportementPouvoir
{
   public :
    virtual ~ComportementPouvoir(){};
	virtual void pouvoir() = 0;
   
};


#endif // ComportementPouvoir_HPP
