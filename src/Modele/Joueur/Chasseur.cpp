/**
*Fichier Chasseur.cpp
* @author Pierre Gaultier & Theo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/////////////////////////////////////////////////////////////////////////
/**
* Constructeur qui associe au chasseur le comportement du pouvoir du chasseur
*/
Chasseur::Chasseur(string nom,string fichier): Joueur(nom,fichier)
{
  ComportementPouvoirChasseur* CPC = new ComportementPouvoirChasseur(this);
  this->setCP(CPC);
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
Chasseur::~Chasseur()
{
	
}

