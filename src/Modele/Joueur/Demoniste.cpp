/**
*Fichier Demoniste.cpp
* @author Pierre Gaultier & Theo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/////////////////////////////////////////////////////////////////////////
/**
* Constructeur qui associe au Demoniste le comportement du pouvoir du Demoniste
*/
Demoniste::Demoniste(string nom,string fichier): Joueur(nom,fichier)
{
  ComportementPouvoirDemoniste* CPD = new ComportementPouvoirDemoniste(this);
  this->setCP(CPD);
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
Demoniste::~Demoniste()
{
}

