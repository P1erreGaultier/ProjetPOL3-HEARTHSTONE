#include <string> // pour les chaines de caracteres
#include <iostream> // pour les entrées/sorties
#include <fstream> // pour la gestion des flux de fichier
#include <sstream> // pour la gestion des flux de string
using namespace std;

#include "ComportementPouvoirGuerrier.hpp"//importe le fichier Joueur


int main()
{

  //Personnage* guerrier = new Guerrier();
  ComportementPouvoir *C = new ComportementPouvoirGuerrier();
	cout << (*C->pouvoir());


  return 0;
}
