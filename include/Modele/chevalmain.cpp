#include <string> // pour les chaines de caracteres
#include <iostream> // pour les entrées/sorties
#include <fstream> // pour la gestion des flux de fichier
#include <sstream> // pour la gestion des flux de string
using namespace std;
                       //toutes les fonctionnalités de la bibliothèque standard
#include "Joueur/Joueur.hpp"



int main()
{
  Personnage guerrier;
  Joueur* Pierre = new Joueur("Pierre", guerrier,"test.txt");
  cout << Pierre->getDeck()->tirerCarte().toString() << endl;
 
  
  cout << Pierre->getDeck()->tirerCarte().toString() << endl;
  
  Carte * bla = new Carte(42,45,"ESSAI",56,true,false);
  Carte * bli = new Carte(42,45,"FLEUR",56,false,true);
  Carte * blo = new Carte(42,45,"CHEVAL",56,true,true);
  Carte * blu = new Carte(42,45,"SYNTHESE",56,false,false);
  Carte * bly = new Carte(42,45,"VIRAL",56,false,false);
  Carte * blmmmm = new Carte(42,45,"ERREUR",56,false,false);
  
  Pierre->ajouterMain(bla);
  Pierre->ajouterMain(bli);
  Pierre->ajouterMain(blo);
  Pierre->ajouterMain(blu);
  Pierre->ajouterMain(bly);
  cout << "baby" << endl;
  Pierre->ajouterMain(blmmmm);
  cout << "babyt" << endl;
  
  cout << Pierre->afficherMain()<< endl;
  
  Pierre->supprimerMain(1);
  cout << Pierre->afficherMain()<< endl;
  Pierre->supprimerMain(1);
  cout << Pierre->afficherMain()<< endl;
  Pierre->supprimerMain(1);
  cout << Pierre->afficherMain()<< endl;
 
  

  
  Pierre->ajouterBoard(bla);
  Pierre->ajouterBoard(bli);
  Pierre->ajouterBoard(blo);
  Pierre->ajouterBoard(blu);
  Pierre->ajouterBoard(bly);
  
  cout << "BLAvovo" << endl;
  
  cout << Pierre->afficherBoard() << endl;
  
  Pierre->supprimerBoard(5);
  Pierre->supprimerBoard(1);
  
  cout << Pierre->afficherBoard() << endl;
  Pierre->supprimerBoard(1);
  
  cout << Pierre->afficherBoard() << endl;
  Pierre->supprimerBoard(21);
  
  
  cout << Pierre->afficherBoard() << endl;
  Pierre->supprimerBoard(1);
  cout << Pierre->afficherBoard() << endl;

  return 0;
}
