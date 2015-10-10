/**
*Fichier LancementPartie.cpp
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
LancementPartie::LancementPartie()
{
	
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
LancementPartie::~LancementPartie()
{
}

/////////////////////////////////////////////////////////////////////////
/**
* Méthode utilisée dans le Main pour lancer une partie (Création des Joueurs, du Jeu ect)
*/
void LancementPartie::lancerPartie()
{
	string nom1,nom2;
	int num1,num2;
	num1 = 0;
	num2 = 0;
	
	vue.afficherIntro();
	
	nom1 = vue.getNomJoueur();
	num1 = vue.getChoixJoueur();
	
	while(num1 < 0 && num1> 6)
	{
		num1 = vue.getChoixJoueur();
	}
	
	
	nom2 = vue.getNomJoueur();
	
	
	num2 = vue.getChoixJoueur();
	
	
	while (num2 < 0 && num2> 6)
	{
		num2 = vue.getChoixJoueur();
	}
	
	
	
	vue.afficherFinIntro();
	
	
	
	switch (num1)
	{
		case 1: {
			this->j1 = new Guerrier(nom1,"DeckGuerrier.txt");
			break;
		}
		
		case 2: {
			this->j1 = new Chasseur(nom1,"DeckChasseur.txt");
			break;
		}
		
		case 3: {
			this->j1 = new Mage(nom1,"DeckMage.txt");
			break;
		}
		
		case 4: {
			this->j1 = new Demoniste(nom1,"DeckDemoniste.txt");
			break;
		}
		
		case 5: {
			this->j1 = new Pretre(nom1,"DeckPretre.txt");
			break;
		}
		
		case 666:{
			this->j1 = new JXR(nom1,"DeckJXR.txt");
			break;
		}
		
		default:{
			this->j1 = new JXR(nom2,"DeckJXR.txt");
			break;
		}
	}
	
	switch (num2)
	{
		case 1: {
			this->j2 = new Guerrier(nom2,"DeckGuerrier.txt");
			break;
		}
		
		case 2: {
			this->j2 = new Chasseur(nom2,"DeckChasseur.txt");
			break;
		}
		
		case 3: {
			this->j2 = new Mage(nom2,"DeckMage.txt");
			break;
		}
		
		case 4: {
			this->j2 = new Demoniste(nom2,"DeckDemoniste.txt");
			break;
		}
		
		case 5: {
			this->j2 = new Pretre(nom2,"DeckPretre.txt");
			break;
		}
		
		case 666:{
			this->j2 = new JXR(nom2,"DeckJXR.txt");
			break;
		}
		
		default:{
			this->j2 = new JXR(nom2,"DeckJXR.txt");
			break;
		}
	}
	
	j1->setJoueurAutre(j2);
	j2->setJoueurAutre(j1);
	
		
	usleep(1000000);
	
	
	this->jeu = new Jeu(j1, j2);
	this->ob = new FinDeJeu(this->jeu);
	jeu->jouer();

	delete(j1);
	delete(j2);
	delete(ob);
	delete(jeu);

}
