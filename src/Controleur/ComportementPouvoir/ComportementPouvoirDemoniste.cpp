/**
*Fichier ComportementPouvoirDemoniste.cpp
* @author Pierre Gaultier & Theo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/**
* Constructeur.
*/
ComportementPouvoirDemoniste::ComportementPouvoirDemoniste(Joueur* j)
{
  this->joueur = j;
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur.
**/
ComportementPouvoirDemoniste::~ComportementPouvoirDemoniste()
{
  
}


/**
* Methode qui applique le pouvoir heroique du Demoniste
*/
void ComportementPouvoirDemoniste::pouvoir()
{
   this->joueur->setPDV(this->joueur->getPdv()-2);
   this->joueur->ajouterMain(this->joueur->getDeck()->tirerCarte());
  
}


