#include <string> // pour les chaines de caracteres
#include <iostream> // pour les entrées/sorties
#include <fstream> // pour la gestion des flux de fichier
#include <sstream> // pour la gestion des flux de string
using namespace std;
#include "include/Controleur/LancementPartie.hpp"

int main()
{
	
	LancementPartie* lel = new LancementPartie();
	lel->lancerPartie();

	delete(lel);
	
  	return 0;
}
