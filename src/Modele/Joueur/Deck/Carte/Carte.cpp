/* 
   Fichier Carte.cpp
   Définition des méthodes de Carte
* @author Pierre Gaultier, Théo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std;

/////////////////////////////////////////////////////////////////////////
/**
* Constructeur.
* Créer une carte.
* @param pdv Point de vie de la carte.
* @param pa Point d'attaque de la carte.
* @param nom Nom de la carte.
* @param coutmana Cout en mana de la carte.
* @param charge Booléen, vrai si la carte à la capacité Charge.
* @param provoc Booléen, vrai si la carte à la capacité Provocation.
* @param sort Booléen, vrai si la carte est un sort
* @param des String, description du sort, inutilisé si cest un serviteur
**/
Carte::Carte(int pdv, int pa, std::string nom, int coutmana, bool charge, bool provoc, bool sort, int fct, string des)
{
   this->pdv = pdv;
   this->pdvmax = pdv;
   this->pa = pa;
   this->nom = nom;
   this->coutmana = coutmana;
   this->charge = charge;
   this->provoc = provoc;
   if (charge == 1 ){
   	this->malinvoc = 0;
   } else {
   	this->malinvoc = 1;
   }
   this->sortilege = sort;
   this->fct = fct;
   this->description = des;
   
}


/////////////////////////////////////////////////////////////////////////
/**
* Destructeur.
**/
Carte::~Carte()
{
	
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie les pv de la carte
* @return pdv int les points de vie de la carte
**/
int Carte::getPdv()
{
  return this->pdv;  
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie les pv de la carte
* @param i int les nouveaux points de vie de la carte
**/
void Carte::setPdv(int i)
{
  this->pdv = i;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie les pdvmax de la carte
* @return pdv int les points de vie max de la carte
**/
int Carte::getPdvmax()
{
  return this->pdvmax;  
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie les pv max de la carte
* @param i int les nouveaux points de vie max de la carte
**/
void Carte::setPdvmax(int i)
{
  this->pdvmax = i;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie les point d'attaque de la carte
* @return pa int les points d'attaque de la carte
**/
int Carte::getPa()
{
	return this->pa; 
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie les pa de la carte
* @param i int les nouveaux points de d'attaque de la carte
**/
void Carte::setPa(int i)
{
  this->pa = i;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie le nom  de la carte
* @return nom string le nom de vie de la carte
**/
string Carte::getNom()
{
	return this->nom; 
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie le nom de la carte
* @param n String le nouveau nom de la carte
**/
void Carte::setNom(string n)
{
  this->nom = n; 
}


/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie le cout en mana de la carte
* @return pdv int le cout en mana de la carte
**/
int Carte::getCoutmana()
{
	return this->coutmana;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie le cout en mana de la carte
* @param i int le nouveau cout en mana de la carte
**/
void Carte::setCoutmana(int i)
{
  this->coutmana = i;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie vrai si la carte a charge
* @return charge Booléen l'etat de charge
**/
bool Carte::getCharge(){
	return this->charge;
}
/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie l'etat de la charge de la carte
* @param c Booléen le nouvel état de charge de la carte
**/
void Carte::setCharge(bool c){
	this->charge =c;
}
/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie vrai si la carte a provocation
* @return provoc Booléen l'etat de provocation
**/
bool Carte::getProvoc(){
	return this->provoc;
}
/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie l'etat de la provocation de la carte
* @param p Booléen le nouvel état de provocation de la carte
**/
void Carte::setProvoc(bool p){
	this->provoc =p;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie vrai si la carte a le mal d'invocation
* @return malinvoc Booléen l'etat de malinvoc
**/
bool Carte::getMalinvoc(){
	return this->malinvoc;
}
/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie l'etat du mal d'invocation de la carte
* @param p Booléen le nouvel état du mal d'invocation de la carte
**/
void Carte::setMalinvoc(bool m){
	this->malinvoc = m;
}
/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie vrai si la carte est un sort
* @return sortilege Booléen l'etat de sortilege
**/
bool Carte::getSortilege(){
	return this->sortilege;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie la description de la carte
* @return description string la description de la carte
**/
string Carte::getDescription(){
	return this->description;
}
/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie la description de la carte
* @param des string la nouvelle description de la carte
**/
void Carte::setDescription(string des){
	this->description = des;
}
/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie la fonction du sort de la care
* @return fct int le numero de la fonction
**/
int Carte::getFct(){
	return this->fct;
}
/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie la fonction du sort de la care
* @param f int le nouveau numero de la fonction
**/
void Carte::setFct(int f){
	this->fct = f;
}


/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie une representation en string de la carte
* @return result string la representation de la carte
**/
string Carte::toString()
{
   string result;
   
   if (sortilege == false)
   {
	   string Spdv = static_cast<ostringstream*>( &(ostringstream() << this->pdv) )->str(); 
	   string Spa = static_cast<ostringstream*>( &(ostringstream() << this->pa) )->str();
	   string Scm = static_cast<ostringstream*>( &(ostringstream() << this->coutmana) )->str();
	   
	   result = "Nom: " + this->nom +" | Attaque: " + Spa + " | PDV:" + Spdv + " | Cout mana:" + Scm ;
   
	   if (this->charge == true)
	   {
	   		result += " | Charge ";
	   }
	   
	   if (this->provoc == true)
	   {
	   	result += " | Provocation ";
		}
	}
	else
	{
		string Spa = static_cast<ostringstream*>( &(ostringstream() << this->pa) )->str();
		string Scm = static_cast<ostringstream*>( &(ostringstream() << this->coutmana) )->str();
		result = "Nom: " + this->nom +" | Cout mana:" + Scm + " | " + this->description;
		
	
	
	
	}

   return result ;
}

