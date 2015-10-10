/**
*Fichier ComportementPouvoirGuerrier.cpp
* @author Pierre Gaultier & Theo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/**
* Constructeur.
*/
ComportementPouvoirGuerrier::ComportementPouvoirGuerrier(Joueur* j)
{
  this->joueur = j;
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur.
**/
ComportementPouvoirGuerrier::~ComportementPouvoirGuerrier()
{
  
}


/**
* Methode qui applique le pouvoir heroique du guerrier
*/
void ComportementPouvoirGuerrier::pouvoir()
{
   this->joueur->setARMURE(this->joueur->getArmure()+2);
  
}


