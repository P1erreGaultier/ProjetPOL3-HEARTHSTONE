/**
*Fichier ComportementPouvoirPretre.cpp
* @author Pierre Gaultier & Theo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/**
* Constructeur.
*/
ComportementPouvoirPretre::ComportementPouvoirPretre(Joueur* j)
{
  this->joueur = j;
	this->vue =new VueConsole();;
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
ComportementPouvoirPretre::~ComportementPouvoirPretre()
{
  delete(vue);
}
/**
* Methode qui applique le pouvoir heroique du Pretre
*/
void ComportementPouvoirPretre::pouvoir()
{
  
	this->vue->afficherChoixPouvoirPretre();
	int choix = this->vue->getChoixJoueur();
		switch (choix)
		{
		    case 1: {
					this->joueur->setPDV(this->joueur->getJoueurAutre()->getPdv()+2);
					if(this->joueur->getPdv()>30)
					{
						this->joueur->setPDV(30);
					}
					break;
		    }
		    default:  {

    				choix = this->vue->getChoixJoueur();
    				bool bonnecarte = false;
    				int size = this->joueur->getBoard()->size();  
    				while ( bonnecarte == false )
    				{
    					if ( choix > 0 && choix <= size)
    					{
    						bonnecarte = true;
    					}
    					else
    					{	
								choix = this->vue->getChoixJoueur();
      					}   				
    				}    						
					int pdv = this->joueur->getBoard()->at(choix-1).getPdv();
					int pdvMax = this->joueur->getBoard()->at(choix-1).getPdvmax();
					
					this->joueur->getBoard()->at(choix-1).setPdv(pdv+2);
					if ( pdv+2 > pdvMax )
					{	
						this->joueur->getBoard()->at(choix-1).setPdv(pdvMax);
					}
				break;
		    }

		}
}


