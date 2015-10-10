/* 
   Fichier Deck.cpp
   Définition des méthodes de Deck
* @author Pierre Gaultier, Théo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std;

/////////////////////////////////////////////////////////////////////////
//random
int myrandom (int i) { return rand()%i;}
/////////////////////////////////////////////////////////////////////////
/**
* Constructeur qui genere le deck a partir d'un fichier passé en parametre
* @param fichier String le fichier utilisé pour generer le deck
*/
Deck::Deck(string fichier)
{
  int pdv,pa,cm,fct,i,j,sz;
  i = 0;
  j = 0;  
  string ligne,nom,des;
  bool charge,provoc,sort; 
  vector<Carte> myvector;
  ifstream ifs(fichier.c_str());
  
  srand(time(0));
  
  if(ifs)
	{
		while(getline(ifs,ligne))
		{

			istringstream iss(ligne);
			iss >> pa;
			iss >> pdv;
			iss >> nom;
			iss >> cm;
			iss >> charge;
			iss >> provoc;
			iss >> sort;
			iss >> fct;
			iss >> des;
			
			
			replace(nom.begin(),nom.end(),'_',' ');
			replace(des.begin(),des.end(),'_',' ');
			
			Carte * c = new Carte(pdv,pa,nom,cm,charge,provoc,sort,fct,des);
			
			myvector.push_back(*c);
			delete(c);
			
			std::random_shuffle ( myvector.begin(), myvector.end() );

			// using myrandom:
  			std::random_shuffle ( myvector.begin(), myvector.end(), myrandom);
  			
			i++;
			
			
		}
	}
	else
	{
		cout<<"erreur dans la creation du deck"<<endl;
	}
	
  sz = myvector.size();
   
  for (j=0; j < sz ; j++)
  {
  	d.push(myvector[j]);
  }
  

  this->taille = i;
  
  usleep(2000000);
  
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
Deck::~Deck()
{
	
}


/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie la taille du deck
* @return taille int
*/
int Deck::getTaille()
{
  return this->taille;  
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie la taille du deck
* @param t int la nouvelle taille
*/
void Deck::setTaille(int t)
{
  this->taille = t;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie la carte au sommet de la pile, puis la suprime du deck.
* @return c Carte
*/
Carte Deck::tirerCarte()
{
	if (d.size() != 0){
		Carte c = d.top();
		d.pop();
		return c;
	}
	else
	{
		Carte* ca = new Carte(-1,-1,".",-1,0,0,0,0,".");
		return *ca;
	}
	
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie la pile
* @return d la pile
*/
stack<Carte> Deck::getStack()
{
  return this->d;  
}
