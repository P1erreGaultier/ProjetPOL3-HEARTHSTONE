/**
*Fichier FinDeJeu.cpp
* @author Pierre Gaultier & Theo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/////////////////////////////////////////////////////////////////////////
/**
* Constructeur
* @param s Sujet de l'observer
*/
FinDeJeu::FinDeJeu(Jeu* j)
{
   this->suj = j;
   this->suj->enregistrerObs(this);
   this->pdvJ1 =30;
   this->pdvJ2 =30;
   this->JeuTermine = false;
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
FinDeJeu::~FinDeJeu()
{
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui actualise le jeu
* @return JeuTermine boolean.
*/
bool FinDeJeu::actualiser()
{
  pdvJ1 = this->suj->getJoueurCourant()->getPdv();
  pdvJ2 = this->suj->getJoueurAutre()->getPdv();
  if(pdvJ1 <= 0){
	cout <<   this->suj->getJoueurAutre()->getNom() + " a gagné!!!" << endl;
	this->JeuTermine = true;
  }
 
  if(pdvJ2 <= 0){
	cout <<   this->suj->getJoueurCourant()->getNom() + " a gagné!!!"<< endl;
	this->JeuTermine = true;
  }
  return JeuTermine;
}



