/* 
   Fichier Deck.hpp
   Définition du type Deck
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef DECK_HPP
#define DECK_HPP

#include <string> // pour les chaines de caracteres
#include <iostream> // pour les entrées/sorties
#include <fstream> // pour la gestion des flux de fichier
#include <sstream> // pour la gestion des flux de string
#include <stack>
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <unistd.h>
#include <time.h>
#include "Carte/Carte.hpp"

/******************************************************************************/
class Deck
{
   private :
      	int taille;
      	std::stack<Carte> d;
      
   public :
   	
	//Constructeurs/Destructeur
   	Deck(std::string fichier);
   	~Deck();
   	
	//Getters/Setters
   	int getTaille();
   	void setTaille(int t);
   	std::stack<Carte> getStack();
   	
	// Depile la premiere carte de la pile et la renvoie
   	Carte tirerCarte();
   	  
};

/******************************************************************************/
#include "../../../../src/Modele/Joueur/Deck/Deck.cpp"
#endif // DECK_HPP
