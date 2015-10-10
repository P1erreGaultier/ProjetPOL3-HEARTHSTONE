/*
   Fichier Joueur.cpp

   Définition des méthodes de Joueur
*/


#include <iostream>
#include <sstream> // pour les conversions en chaine
#include <typeinfo>

using namespace std; // seulement dans le .cpp !

/////////////////////////////////////////////////////////////////////////
/**
* Constructeur.
* @param nom string le nom du joueur
* @param fichier string le fichier utilisé pour creer le deck
**/
Joueur::Joueur(std::string nom, std::string fichier)
{
	this->nom = nom; 
	this->d = new Deck(fichier);
	this->main = new vector<Carte>();
	this->board = new vector<Carte>();
	this->pouvoirUtilise = false;	
	this->pdv = 30;
	this->armure = 0;
	this->pdm = 0;
	this->pdmTour = 0;
     
}

/////////////////////////////////////////////////////////////////////////
/**
* Destructeur.
**/
Joueur::~Joueur()
{
	
	delete(d);
	delete(main);
	delete(board);
	delete(CP);
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie le deck du joueur
* @return d Deck le deck du Joueur
**/
Deck* Joueur::getDeck()
{
  return this->d;  
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie la main du joueur
* @return main Vector<Carte> la main du joueur
**/
vector<Carte>* Joueur::getMain()
{
  return this->main;  
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie les pv de la carte
* @return pdv int les points de vie de la carte
**/
vector<Carte>* Joueur::getBoard()
{
  return this->board;  
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie les pv de la carte
* @return pdv int les points de vie de la carte
**/
std::string Joueur::getNom()
{
  return this->nom;  
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie le nom du joueur
* @param n string le nouveau nom du joueur
**/
void Joueur::setNom(std::string n)
{
  this->nom = n;
}
/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie un booléen qui indique si le pouvoir a été utilisé
* @return pouvoirUtilise Booléen etat de l'utilisation du pouvoir
**/
bool Joueur::getPouvoirUtilise()
{
  return this->pouvoirUtilise;  
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui modifie le booléen qui indique si le pouvoir a été utilisé
* @param p Booléen etat de l'utilisation du pouvoir
**/
void Joueur::setPouvoirUtilise(bool p)
{
  this->pouvoirUtilise = p;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie le nombre de points de vie du personnage
* @return pdv les points de vie du personnage
*/
int Joueur::getPdv()
{
   return this->pdv;
}

/////////////////////////////////////////////////////////////////////////


/**
* Methode qui remplace les points de vie du personnage par npdv
* @param npdv les nouveaux points de vie
*/
void Joueur::setPDV(int npdv)
{
   this->pdv = npdv;
   if (pdv > 30)
   {
   	pdv = 30;
   }
}


/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie le nombre de points d''armure du personnage
* @return armure les points d'armure du personnage
*/
int Joueur::getArmure()
{
   return this->armure;
}

/////////////////////////////////////////////////////////////////////////

/**
* Methode qui remplace les points d'armure du personnage par narmure
* @param narmure les nouveaux points d'armure
*/
void Joueur::setARMURE(int narmure)
{
   this->armure = narmure;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie le nombre de points de mana du personnage
* @return mana les points de mana du personnage
*/
int Joueur::getPdm()
{
   return this->pdm;
}

/////////////////////////////////////////////////////////////////////////

/**
* Methode qui remplace les points de mana du personnage par npdv
* @param npdm les nouveaux points de mana
*/
void Joueur::setPDM(int npdm)
{
   this->pdm = npdm;
}


/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie le nombre de points de mana du personnage au Tour courant
* @return mana les points de mana du personnage
*/
int Joueur::getPdmTour()
{
   return this->pdmTour;
}

/////////////////////////////////////////////////////////////////////////

/**
* Methode qui remplace les points de mana du personnage par npdv
* @param npdm les nouveaux points de mana
*/
void Joueur::setPDMTour(int npdmt)
{
   this->pdmTour = npdmt;
}
/////////////////////////////////////////////////////////////////////////



/**
*Methode qui renvoie une chaine de caracteres qui decrit le personnage

*@return String definition du personnage
*/
string  Joueur::toString()
{
   string Spdv = static_cast<ostringstream*>( &(ostringstream() << this->pdv) )-> str();
   string Sarmure = static_cast<ostringstream*>( &(ostringstream() << this->armure) )-> str();
   string Spdm = static_cast<ostringstream*>( &(ostringstream() << this->pdm) )-> str();
   
   return "pdv: " +Spdv+ " armure: " +Sarmure+ " pdm: " +Spdm;
}


/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie le comportement du pouvoir du personnage
* @return CP le comportement du pouvoir du personnage
*/
ComportementPouvoir* Joueur::getCP()
{
   return this->CP;
}

/////////////////////////////////////////////////////////////////////////

/*
* Methode qui remplace le comportement du pouvoir par CP
* @param CP le nouveau comportement
*/
void Joueur::setCP(ComportementPouvoir* CP)
{
   this->CP = CP;
}

/////////////////////////////////////////////////////////////////////////
/**
* Methode qui renvoie le comportement du pouvoir du personnage
* @return CP le comportement du pouvoir du personnage
*/
Joueur* Joueur::getJoueurAutre()
{
   return this->joueurAutre;
}

/////////////////////////////////////////////////////////////////////////

/*
* Methode qui remplace le comportement du pouvoir par CP
* @param CP le nouveau comportement
*/
void Joueur::setJoueurAutre(Joueur* j)
{
   this->joueurAutre = j;
}

/////////////////////////////////////////////////////////////////////////
/*
* Methode qui applique le pouvoir du personnage
*/
void Joueur::utiliserPouvoir()
{
   this->CP->pouvoir();
}

/////////////////////////////////////////////////////////////////////////
/*
* Methode qui renvoie la main du personnage en string
* @return result string
*/
string Joueur::afficherMain()
{
	string result;
	int i =0;
	int size;
	
	size = this->main->size();
	
	if (size == 0) 
	{
		return "Main vide!";
	} else {
	
		while ( i < size)
		{
			string index = static_cast<ostringstream*>( &(ostringstream() << i+1) )->str();
			string lel = this->main->at(i).toString();
			result +=  index +". " + lel + "\n";
			
			i++;
		}
	}
	
	
	return result;
	
	
}


/////////////////////////////////////////////////////////////////////////
/*
* Methode qui renvoie le board du personnage en string
* @return result string
*/
string Joueur::afficherBoard()
{
	string result;
	int i =0;
	int size;
	
	size = this->board->size();
	
	if (size == 0) 
	{
		return "Board vide!";
	} else {
	
		while ( i < size)
		{
			string index = static_cast<ostringstream*>( &(ostringstream() << i+1) )->str();
			string lel = this->board->at(i).toString();
			result +=  index +". " + lel + "\n";						
			i++;
		}
	}	
	
	return result;
	
	
}

/////////////////////////////////////////////////////////////////////////
/*
* Methode qui ajoute une carte a la main
* @param c Carte a ajouter
* @return Booléen si la carte a été ajouté
*/
bool Joueur::ajouterMain(Carte c)
{
	
	int size = this->main->size();
	if (size >= tailleMain)
	{
		cout << "Main pleine !" << endl;
		return false;
	} else {
		 main->push_back (c);
		 return true;
	}
		
	
}

//////////////////////////////////////////////////////////////////////////
/*
* Methode qui ajoute une carte au board
* @param c Carte a ajouter
* @return Booléen si la carte a été ajouté
*/
bool Joueur::ajouterBoard(Carte c)
{
	int size = this->board->size();
	if (size >= tailleBoard)
	{
		cout << "Board plein !" << endl;
		return false;
	} else {
		 board->push_back (c);
		 return true;
	}
		
	
}

//////////////////////////////////////////////////////////////////////////
/*
* Methode qui retire une carte a la main
* @param c Carte a supprimer
* @return Booléen si la carte a été supprimer
*/
bool Joueur::supprimerMain(int index)
{
	string sindex = static_cast<ostringstream*>( &(ostringstream() << index) )->str();
	int size = this->main->size();
	if (index-1 >= tailleMain || index-1 < 0 || index > size )
	{	
		cout << "Index "+ sindex +" hors de la Main !!" << endl;
		return false;
	} else {
		main->erase (this->main->begin()+index-1);
		cout << " la carte n°"+ sindex + " a été enlevée de la main"<< endl;
		return true;
	}
}
		
//////////////////////////////////////////////////////////////////////////
/*
* Methode qui retire une carte au board
* @param c Carte a supprimer
* @return Booléen si la carte a été supprimer
*/
bool Joueur::supprimerBoard(int index)
{
	string sindex = static_cast<ostringstream*>( &(ostringstream() << index) )->str();
	int size = this->main->size();
	if (index-1 >= tailleBoard || index-1 < 0 || index > size) 
	{	
		cout << "Index "+ sindex+" hors du Board !!" << endl;
		return false;
	} else {
		
		board->erase (this->board->begin()+index-1);
		
		cout << " la carte n°"+ sindex + " a été enlevée du board"<< endl;
		return true;
	}
}



