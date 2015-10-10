/**
*Fichier Guerrier.cpp
* @author Pierre Gaultier & Theo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/////////////////////////////////////////////////////////////////////////
/**
* Constructeur qui associe au Guerrier le comportement du pouvoir du Guerrier
*/
Guerrier::Guerrier(string nom,string fichier): Joueur(nom,fichier)
{
  ComportementPouvoirGuerrier* CPG = new ComportementPouvoirGuerrier(this);
  this->setCP(CPG);
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
Guerrier::~Guerrier()
{
}

