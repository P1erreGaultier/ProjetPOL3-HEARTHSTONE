/* 
   Fichier Carte.hpp
   Définition du type Carte
* @author Pierre Gaultier, Théo Dolez
*/

#ifndef CARTE_HPP
#define CARTE_HPP

#include <string> // pour le type std::string


/******************************************************************************/



class Carte
{
   private :
   int pdv;
   int pdvmax;
   int pa;
   std::string nom;
   int coutmana;
   bool charge;
   bool provoc;
   bool malinvoc;
   bool sortilege;
   int fct;
   std::string description;   
   
   public :

  	Carte();
	Carte(int pdv, int pa, std::string nom, int coutmana, bool charge, bool provoc, bool sort, int f, std::string des); //construceur
	~Carte(); // destructeur

  	int getPdv();
	  void setPdv(int i);
  
  	int getPdvmax();
  	void setPdvmax(int i);
		
  	int getPa();
	void setPa(int i);

	std::string getNom();
	void setNom(std::string n);

	int getCoutmana();
	void setCoutmana(int i);
  
	bool getCharge();
	void setCharge(bool c);
  
	bool getProvoc();
	void setProvoc(bool p);
	  
	bool getMalinvoc();
	void setMalinvoc(bool m);
	  
	bool getSortilege();
	void setSortilege(bool m);
	  
	int getFct();
	void setFct(int i);
	std::string getDescription();
	void setDescription(std::string des);

	std::string toString();
			
}; // class Carte
/******************************************************************************/
#include "../../../../../src/Modele/Joueur/Deck/Carte/Carte.cpp"
#endif // CARTE_HPP
