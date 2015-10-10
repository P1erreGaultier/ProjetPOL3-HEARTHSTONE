/**
*Fichier ComportementPouvoirMage.cpp
* @author Pierre Gaultier & Theo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/**
* Constructeur.
*/
ComportementPouvoirMage::ComportementPouvoirMage(Joueur* j)
{
  this->joueur = j;
	this->vue =new VueConsole();;
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
ComportementPouvoirMage::~ComportementPouvoirMage()
{
  delete(vue);
}

/**
* Methode qui applique le pouvoir heroique du Mage
*/
void ComportementPouvoirMage::pouvoir()
{
  if(this->joueur->getJoueurAutre()->getBoard()->size() !=0)
  {
	this->vue->afficherChoixPouvoirMage();
	int choix = this->vue->getChoixJoueur();
		switch (choix)
		{
		    case 1: {

		    		int arm =  joueur->getJoueurAutre()->getArmure();
			
					if (arm == 0)
					{					
						joueur->getJoueurAutre()->setPDV(joueur->getJoueurAutre()->getPdv()- 1);
					}
					else
					{
						if (1 <= arm)
						{
							joueur->getJoueurAutre()->setARMURE(arm-1);
						}
						else
						{
							int ataq2 = 1 - arm;
							joueur->getJoueurAutre()->setARMURE(0);
							joueur->getJoueurAutre()->setPDV(joueur->getJoueurAutre()->getPdv()- ataq2);
						}
					}

					break;
		    }
		    default:  {

    				choix = this->vue->getChoixJoueur();
    				bool bonnecarte = false;
    				int size = this->joueur->getJoueurAutre()->getBoard()->size();  
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
					int pdv = this->joueur->getJoueurAutre()->getBoard()->at(choix-1).getPdv();
					this->joueur->getJoueurAutre()->getBoard()->at(choix-1).setPdv(pdv-1);
					if ( this->joueur->getJoueurAutre()->getBoard()->at(choix-1).getPdv() <= 0 )
					{	
						this->joueur->getJoueurAutre()->supprimerBoard(choix);
						cout << "Vous avez triomphé de votre adversaire !" << endl;
					}
				break;
		    }

		}
  }
  else
  {
  	int arm =  joueur->getJoueurAutre()->getArmure();
	if (arm == 0)
	{					
		joueur->getJoueurAutre()->setPDV(joueur->getJoueurAutre()->getPdv()- 1);
	}
	else
	{
		if (1 <= arm)
		{
			joueur->getJoueurAutre()->setARMURE(arm-1);
		}
		else
		{
			int ataq2 = 1 - arm;
			joueur->getJoueurAutre()->setARMURE(0);
			joueur->getJoueurAutre()->setPDV(joueur->getJoueurAutre()->getPdv()- ataq2);
		}
	}
  }
}


