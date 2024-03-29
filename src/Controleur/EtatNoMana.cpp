/**
*Fichier EtatNoMana.cpp
* @author Pierre Gaultier & Theo Dolez
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/////////////////////////////////////////////////////////////////////////
/**
* Constructeur.
* @param j le jeu 
*/
EtatNoMana::EtatNoMana(Jeu* j)
{
	this->jeu = j;
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
EtatNoMana::~EtatNoMana()
{
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie le jeu
*@return jeu le jeu
*/
Jeu* EtatNoMana::getJeu()
{
  return this->jeu;  
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui termine le tour en cours, et lance le suivant
*/
void EtatNoMana::finTour()
{
  jeu->setEtat(jeu->getEtatDebutTour());
  jeu->echangeJoueur();
  jeu->jouer();
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui affiche les choix du Joueur disponibles pour cet Etat et les exécute si le Joueur entre les numéros associés.
*/
int EtatNoMana::afficherChoixEtat()
{
	int choix = -1;
	
	int choixcarte1, choixcarte2;
	
	
	cout << "\nETAT NO MANA\n" << endl;
	
	jeu->getVue()->afficherChoixNoMana();
	choix = jeu->getVue()->getChoixJoueur();
		switch (choix)
		{
		    case 1: {
					jeu->getVue()->afficherMain(jeu->getJoueurCourant());
					break;
		    }
		   
		    case 2: {	
				  jeu->getVue()->afficherBoard(jeu->getJoueurCourant());
				  break;
    		}
    		case 3:
    		{
					jeu->getVue()->afficher2Board(jeu->getJoueurCourant(),jeu->getJoueurAutre());
    				break;
    		}
    		case 4:
    		{
					jeu->getVue()->afficherPersonnage(jeu->getJoueurCourant());
					jeu->getVue()->afficherPersonnageAutre(jeu->getJoueurAutre());
    				break;
    		}
    		case 5:
    		{
    			if (jeu->getJoueurAutre()->getBoard()->size() !=0)
    			{
    				jeu->getVue()->afficherChoixCvC();
    				bool bonnecarte1 = false;
    				bool bonnecarte2 = false;
    				choixcarte1 = jeu->getVue()->getChoixJoueur();
    				choixcarte2 = jeu->getVue()->getChoixJoueur();
    				int size1 = jeu->getJoueurCourant()->getBoard()->size();
    				int size2 = jeu->getJoueurAutre()->getBoard()->size();
    				
    				while ( bonnecarte1 == false &&  bonnecarte2 == false )
    				{
    					if ( choixcarte1 > 0 && choixcarte1 <= size1 && choixcarte2 > 0 && choixcarte2 <= size2 )
    					{
    						bonnecarte1 = true;
    						bonnecarte2 = true;
    					}
    					else
    					{	
    						jeu->getVue()->afficherChoixCvC();
    						choixcarte1 = jeu->getVue()->getChoixJoueur();
    						choixcarte2 = jeu->getVue()->getChoixJoueur();
      					}   				
    				}    	
    				
    				jeu->attaqueCvC(choixcarte1, choixcarte2);
    				
    				if (jeu->testNoAttaque() == true )
    				{
    					jeu->setEtat(jeu->getEtatDoubleNo());
		   		 	}
		   		 }
		   		 else
		   		 {
		   		 	jeu->getVue()->afficherPasDeCarteAdverse();
		   		 }		  
		   		 	break; 		 
    					
    		}
    		case 6:
    		{		
    				jeu->getVue()->afficherChoixCvJ();
    				bool bonnecarte = false;
    				choixcarte1 = jeu->getVue()->getChoixJoueur();	
    				int size = jeu->getJoueurCourant()->getBoard()->size();  
    				
    				while ( bonnecarte == false )
    				{
    					if ( choixcarte1 > 0 && choixcarte1 <= size)
    					{
    						bonnecarte = true;
    					}
    					else
    					{	
    						jeu->getVue()->afficherChoixCvJ();
    						choixcarte1 = jeu->getVue()->getChoixJoueur();
      					}   				
    				}  
    				jeu->attaqueCvJ(choixcarte1);
    				if (jeu->testNoAttaque() == true )
    				{
    					jeu->setEtat(jeu->getEtatNoAttaque());
		   		 	}		   		 
    				break;	
    		}
		}
	
	return choix;



}

