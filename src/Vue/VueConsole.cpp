/*
   Fichier VueConsole.cpp

   Définition des méthodes de VueConsole
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/////////////////////////////////////////////////////////////////////////
/**
* Constructeur
*/
VueConsole::VueConsole()
{

}
/////////////////////////////////////////////////////////////////////////
/**
* Destructeur
*/
VueConsole::~VueConsole()
{

}

/////////////////////////////////////////////////////////////////////////
/**
* Méthode qui renvoie un int entré par l'utilisateur.
* @return i entier.
*/
int VueConsole::getChoixJoueur()
{
	
	int i =0;
    cin >> i;
	return i;
}
/////////////////////////////////////////////////////////////////////////
/**
* Méthode qui renvoie une chaîne entrée par l'utilisateur.
* @return s String.
*/
string VueConsole::getNomJoueur()
{
	
	string s ="";
    cin >> s;
	return s;
}




/////////////////////////////////////////////////////////////////////////
/**
* Affiche la main du Joueur.
*/
void VueConsole::afficherMain(Joueur* j)
{
  cout << "\n●●--●●--●● VOTRE MAIN ●●--●●--●●" << endl;
	cout <<  j->afficherMain() << endl; 
	cout << "●●--●●--●●--●●--●●--●●--●●--●●--●●\n" << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche les choix du Joueur pour l'état Debut Tour.
*/
void VueConsole::afficherChoixDebutTour()
{
	cout << "Que voulez vous faire ?" << endl;
	cout << "0 -> Passer votre tour. \n1 -> Afficher votre main. \n2 -> Jouer une carte. \n3 -> Afficher le board. \n4 -> Afficher les 2 boards. \n5 -> Afficher les Personnages.\n6 -> Attaquer une carte. \n7 -> Utiliser le pouvoir heroique \n8 -> Attaquer le héros adverse." << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche les choix du Joueur pour l'état No Mana.
*/
void VueConsole::afficherChoixNoMana()
{
	cout << "Que voulez vous faire ?" << endl;
	cout << "0 -> Passer votre tour. \n1 -> Afficher votre main. \n2 -> Afficher le board. \n3 -> Afficher les 2 boards. \n4 -> Afficher les personnages. \n5 -> Attaquer une carte. \n6 -> Attaquer le héros adverse" << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche les choix du Joueur pour l'état No Attaque.
*/
void VueConsole::afficherChoixNoAttaque()
{
	cout << "Que voulez vous faire ?" << endl;
	cout << "0 -> Passer votre tour. \n1 -> Afficher votre main. \n2 -> Jouer une carte. \n3 -> Afficher le board. \n4 -> Afficher les 2 boards. \n5 -> Afficher les personnages. \n6 -> Utiliser le pouvoir héroïque." << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche les choix du Joueur pour l'état Double No.
*/
void VueConsole::afficherChoixDoubleNo()
{
	cout << "Que voulez vous faire ?" << endl;
	cout << "0 -> Passer votre tour. \n1 -> Afficher votre main.  \n2 -> Afficher le board. \n3 -> Afficher les 2 boards.  \n4 -> Afficher les Personnages." << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche le Board du Joueur entré en paramètre.
* @param j Le joueur.
*/
void VueConsole::afficherBoard(Joueur* j)
{
  cout << "\n°•. °•. °•. VOTRE BOARD .•° .•° .•°" << endl;
  cout << j->afficherBoard() << endl;
  cout << "°•. °•. °•. °•. °•. .•° .•° .•° .•° .•°\n" << endl; 
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche le Board des 2 joueurs.
* @param j1 Le premier Joueur.
* @param j2 Le deuxième Joueur.
*/
void VueConsole::afficher2Board(Joueur* j1, Joueur* j2)
{
  cout << "\n°•. °•. °•. VOTRE BOARD .•° .•° .•°" << endl;
  cout << j1->afficherBoard() << endl;
  cout << "°•. °•. °•. °•. °•. .•° .•° .•° .•° .•°\n" << endl; 
  
  cout << "\n°•. °•. °•. SON BOARD .•° .•° .•°" << endl;
  cout << j2->afficherBoard() << endl;
  cout << "°•. °•. °•. °•. °•. .•° .•° .•° .•° .•°\n" << endl; 
  
  
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche les informations du Joueur entré en paramètre au début de son tour.
* @param j Le joueur.
*/
void VueConsole::afficherDebutTour(Joueur* j)

{
	cout << "C'est à " + j->getNom() + " de jouer." << endl;	
  string spdm = static_cast<ostringstream*>( &(ostringstream() << j->getPdm())  )->str();
	cout <<  "Vous avez " + spdm + " points de Mana." << endl;
	cout << j->afficherMain() << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche "Fin du Tour".
*/
void VueConsole::afficherFinTour()
{
  cout << "\n▁ ▂ ▄ ▅ ▆ ▇ █ Fin du Tour █ ▇ ▆ ▅ ▄ ▂ ▁\n" << endl;  
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche "Quelle carte voulez-vous jouer ?".
*/
void VueConsole::afficherJouerCarte()
{
  cout << "Quelle carte voulez-vous jouer ?" << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche les points de mana restant du Joueur (valeur entrée en paramètre)
* @param i Le nombre de Pts de Mana restant.
*/
void VueConsole::afficherPdmnRestant(int i)
{
  string si = static_cast<ostringstream*>( &(ostringstream() << i)  )->str();
	cout << "Il vous reste " + si + " point(s) de Mana." << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche "Pas assez de Mana!".
*/
void VueConsole::afficherPasAssezDeMana()
{
  cout << "Pas assez de Mana !" << endl;
}
/////////////////////////////////////////////////////////////////////////
/**
* Affiche "Entrez le numéro de votre Carte, appuyez sur Entrée, puis faites de même avec la Carte de l'adversaire";
*/
void VueConsole::afficherChoixCvC()
{
	cout << "Entrez le numéro de votre Carte, appuyez sur Entrée, puis faites de même avec la Carte de l'adversaire" << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche "Entrez le numéro de votre Carte, appuyez sur Entrée".
*/
void VueConsole::afficherChoixCvJ()
{
	cout << "Entrez le numéro de votre Carte, appuyez sur Entrée" << endl;
}


/////////////////////////////////////////////////////////////////////////
/**
* Affiche les informations relatives à un Joueur j entré en paramètre.
* @param j Le Joueur.
*/
void VueConsole::afficherPersonnage(Joueur* j)
{
   int pdvv = j->getPdv();
   int pdmn = j->getPdmTour();
   int armm = j->getArmure();
   string pdv = static_cast<ostringstream*>( &(ostringstream() << pdvv)  )->str();
   string pdm = static_cast<ostringstream*>( &(ostringstream() << pdmn)  )->str();
   string arm = static_cast<ostringstream*>( &(ostringstream() << armm)  )->str();
    			
   cout << "\n Vous avez " + pdv + " points de vie. " << endl;
   cout << " Vous avez " + pdm + " points de Mana. " << endl;
   cout << " Vous avez " + arm + " points d'armure. \n" << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche les informations relatives à un Joueur j entré en paramètre. (destiné pour l'adversaire)
* @param j Le Joueur.
*/
void VueConsole::afficherPersonnageAutre(Joueur* j)
{
   int pdvv = j->getPdv();
   int pdmn = j->getPdm();
   int armm = j->getArmure();
   string pdv = static_cast<ostringstream*>( &(ostringstream() << pdvv)  )->str();
   string pdm = static_cast<ostringstream*>( &(ostringstream() << pdmn)  )->str();
   string arm = static_cast<ostringstream*>( &(ostringstream() << armm)  )->str();
    			
   cout << "\n Il a " + pdv + " points de vie. " << endl;
   cout << " Il a " + pdm + " points de Mana. " << endl;
   cout << " Il a " + arm + " points d'armure. \n" << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche les choix pour le pouvoir du Mage.
*/
void VueConsole::afficherChoixPouvoirMage()
{  			
	cout << "Entrez le numéro 1 pour attaquer le heros adverse,"<< endl << "sinon entrez un autre chiffre, puis la position sur le board de la carte a attaquer" << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche les choix pour le pouvoir du Pretre.
*/
void VueConsole::afficherChoixPouvoirPretre()
{  			
	cout << "Entrez le numéro 1 pour soigner votre heros,"<< endl << "sinon entrez un autre chiffre, puis la position sur le board de la carte a soigner" << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche l'intro du jeu.
*/
void VueConsole::afficherIntro()
{
	cout << "Bienvenue ! \n Vous allez commencer une partie du Jeu Hearthstone, un jeu convivial et divertissant ! \n";
	cout << "Mais pour cela vous devez choisir, votre adversaire et vous, un personnage que vous incarnerez ! \n";
	cout << "Vous avez le choix parmis 5 valeureux champions : \n 1- Le Guerrier : Son pouvoir héroïque vous permet de gagner 2 points d'armure ! \n 2- Le Chasseur : Son pouvoir héroïque vous permet d'infliger 2 points de dégats au Champion ennemi ! Wow ! \n 3- Le Mage : Son pouvoir héroïque vous permet d'infliger 1 point de dégat à n'importe qui, une créature ennemie ou le joueur adverse ! \n 4- Le Démoniste : Son pouvoir héroïque vous permet de piocher une carte contre 2 de vos points de vie ! \n 5- Le Prêtre : Son pouvoir héroïque vous permet de soigner 2 points de vie à un de vos serviteurs ou à vous même !\n 666- Le légendaire JXR : Son pouvoir héroïque détruit à l'aide d'une induction Noeutherienne n'importe quel serviteur ennemi! \n";  
	cout << "Indiquez votre nom puis le numéro du champion que vous choisissez, de même pour votre adversaire.\n";
} 

/////////////////////////////////////////////////////////////////////////
/**
* Affiche la fin de l'intro du jeu.
*/
void VueConsole::afficherFinIntro()
{
	cout << "\n Merci ! Vos Decks vont maintenant être construits, bonne partie !\n";

}


/////////////////////////////////////////////////////////////////////////
/**
* Affiche "Veuillez indiquer le numéro de la carte cible. ".
*/
void VueConsole::afficherChoixCarte()
{
	cout << "Veuillez indiquer le numéro de la carte cible. " << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche "Choisissez la carte adverse qui subira L'INDUCTION NOEUTHERIENNE ! MUAHAHAHAHHA!".
*/
void VueConsole::afficherChoixPouvoirInduction()
{
	cout << "Choisissez la carte adverse qui subira L'INDUCTION NOEUTHERIENNE ! MUAHAHAHAHHA!" << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche "Veuillez entrer un choix valide ! :)".
*/
void VueConsole::afficherErreurChoix()
{
	cout << "Veuillez entrer un choix valide ! :)" << endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche "Il n'y a pas de serviteurs sur le board ennemi ! ".
*/
void VueConsole::afficherPasDeCarteAdverse()
{
	cout << "Il n'y a pas de serviteurs sur le board ennemi ! Dommage !  "<< endl;
}

/////////////////////////////////////////////////////////////////////////
/**
* Affiche "Il n'y a pas de serviteurs sur le board ennemi ! ".
*/
void VueConsole::afficherPasDeCarteBoard()
{
	cout << "Il n'y a pas de serviteurs sur votre board ! Dommage ! Soyez plus prudent la prochaine fois !  "<< endl;
}







