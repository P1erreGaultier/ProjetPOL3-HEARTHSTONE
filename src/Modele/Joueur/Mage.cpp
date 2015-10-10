/**
*Fichier Mage.cpp
* @author Pierre Gaultier & Theo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/////////////////////////////////////////////////////////////////////////
/**
* Constructeur qui associe au Mage le comportement du pouvoir du Mage
*/
Mage::Mage(string nom,string fichier): Joueur(nom,fichier)
{
  ComportementPouvoirMage* CPM = new ComportementPouvoirMage(this);
  this->setCP(CPM);
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
Mage::~Mage()
{
}

