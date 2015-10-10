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
ComportementPouvoirChasseur::ComportementPouvoirChasseur(Joueur* j)
{
  this->joueur = j;
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur.
**/
ComportementPouvoirChasseur::~ComportementPouvoirChasseur()
{
  
}


/**
* Methode qui applique le pouvoir heroique du Chasseur
*/
void ComportementPouvoirChasseur::pouvoir()
{
   int arm =  this->joueur->getJoueurAutre()->getArmure();
   if (arm == 0)
   {					
	this->joueur->getJoueurAutre()->setPDV(this->joueur->getJoueurAutre()->getPdv()-2);
   }
   else
   {
	if (2 <= arm)
	{
		this->joueur->getJoueurAutre()->setARMURE(arm-2);
	}
	else
	{
		int ataq2 = 2 - arm;
		this->joueur->getJoueurAutre()->setARMURE(0);
		this->joueur->getJoueurAutre()->setPDV(this->joueur->getJoueurAutre()->getPdv()- ataq2);
	}
   }
   
}


