#include <string> // pour les chaines de caracteres
#include <iostream> // pour les entrées/sorties
#include <fstream> // pour la gestion des flux de fichier
#include <sstream> // pour la gestion des flux de string
using namespace std;
#include "../Modele/Joueur/Joueur.hpp"
#include "Jeu.hpp"
#include "FinDeJeu.hpp"
int main()
{
	
	
	Joueur* Pierre = new Pretre("Pierre","DeckGuerrier.txt");
	Joueur* Theo = new Mage("Théo","DeckGuerrier.txt");
	Pierre->setJoueurAutre(Theo);
	Theo->setJoueurAutre(Pierre);
	Jeu* game = new Jeu(Pierre, Theo);
	FinDeJeu* ob = new FinDeJeu(game);
	game->jouer();
  	return 0;
}
