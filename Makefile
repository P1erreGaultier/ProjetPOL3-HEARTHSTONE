FLAGS = -g -pedantic -Wall -Wextra

all: exec clean
exec :Joueur.o Deck.o Carte.o ComportementPouvoir.o ComportementPouvoirGuerrier.o ComportementPouvoirJXR.o ComportementPouvoirChasseur.o ComportementPouvoirPretre.o ComportementPouvoirMage.o ComportementPouvoirDemoniste.o Guerrier.o JXR.o Chasseur.o Pretre.o Mage.o Demoniste.o Jeu.o Etat.o EtatDebutTour.o EtatNoAttaque.o EtatDoubleNo.o EtatNoMana.o Sujet.o Observer.o FinDeJeu.o VueConsole.o LancementPartie.o 
	g++ $(FLAGS)  Main.cpp -o Main.exe
	
	
Carte.o: 
	g++ $(FLAGS) include/Modele/Joueur/Deck/Carte/Carte.hpp -o bin/Modele/Joueur/Deck/Carte/Carte.o -c

Deck.o:
	g++ $(FLAGS) include/Modele/Joueur/Deck/Deck.hpp -o bin/Modele/Joueur/Deck/Deck.o -c

ComportementPouvoir.o:
	g++ $(FLAGS) include/Controleur/ComportementPouvoir/ComportementPouvoir.hpp -o bin/Controleur/ComportementPouvoir/ComportementPouvoir.o -c

ComportementPouvoirGuerrier.o:ComportementPouvoir.o 
	g++ $(FLAGS) include/Controleur/ComportementPouvoir/ComportementPouvoirGuerrier.hpp -o bin/Controleur/ComportementPouvoir/ComportementPouvoirGuerrier.o -c

ComportementPouvoirJXR.o:ComportementPouvoir.o 
	g++ $(FLAGS) include/Controleur/ComportementPouvoir/ComportementPouvoirJXR.hpp -o bin/Controleur/ComportementPouvoir/ComportementPouvoirJXR.o -c

ComportementPouvoirChasseur.o:ComportementPouvoir.o
	g++ $(FLAGS) include/Controleur/ComportementPouvoir/ComportementPouvoirChasseur.hpp -o bin/Controleur/ComportementPouvoir/ComportementPouvoirChasseur.o -c

ComportementPouvoirPretre.o:ComportementPouvoir.o
	g++ $(FLAGS) include/Controleur/ComportementPouvoir/ComportementPouvoirPretre.hpp -o bin/Controleur/ComportementPouvoir/ComportementPouvoirPretre.o -c

ComportementPouvoirMage.o:ComportementPouvoir.o
	g++ $(FLAGS) include/Controleur/ComportementPouvoir/ComportementPouvoirMage.hpp -o bin/Controleur/ComportementPouvoir/ComportementPouvoirMage.o -c

ComportementPouvoirDemoniste.o:ComportementPouvoir.o
	g++ $(FLAGS) include/Controleur/ComportementPouvoir/ComportementPouvoirDemoniste.hpp -o bin/Controleur/ComportementPouvoir/ComportementPouvoirDemoniste.o -c

Joueur.o:
	g++ $(FLAGS) include/Modele/Joueur/Joueur.hpp -o bin/Modele/Joueur/Joueur.o -c

VueConsole.o:
	g++ $(FLAGS) include/Vue/VueConsole.hpp -o bin/Vue/VueConsole.o -c

Sujet.o:
	g++ $(FLAGS) include/Controleur/Sujet.hpp -o bin/Controleur/Sujet.o -c

Observer.o:
	g++ $(FLAGS) include/Controleur/Sujet.hpp -o bin/Controleur/Observer.o -c

Jeu.o:Sujet.o
	g++ $(FLAGS) include/Controleur/Jeu.hpp -o bin/Controleur/Jeu.o -c

Etat.o:
	g++ $(FLAGS) include/Controleur/Etat.hpp -o bin/Controleur/Etat.o -c

EtatDebutTour.o:Etat.o
	g++ $(FLAGS) include/Controleur/EtatDebutTour.hpp -o bin/Controleur/EtatDebutTour.o -c

EtatDoubleNo.o:Etat.o
	g++ $(FLAGS) include/Controleur/EtatDoubleNo.hpp -o bin/Controleur/EtatDoubleNo.o -c

EtatNoMana.o:Etat.o
	g++ $(FLAGS) include/Controleur/EtatNoMana.hpp -o bin/Controleur/EtatNoMana.o -c

EtatNoAttaque.o:Etat.o
	g++ $(FLAGS) include/Controleur/EtatNoAttaque.hpp -o bin/Controleur/EtatNoAttaque.o -c

Guerrier.o: Joueur.o
	g++ $(FLAGS) include/Modele/Joueur/Guerrier.hpp -o bin/Modele/Joueur/Guerrier.o -c

JXR.o: Joueur.o
	g++ $(FLAGS) include/Modele/Joueur/JXR.hpp -o bin/Modele/Joueur/JXR.o -c

Chasseur.o: Joueur.o
	g++ $(FLAGS) include/Modele/Joueur/Chasseur.hpp -o bin/Modele/Joueur/Chasseur.o -c

Pretre.o: Joueur.o
	g++ $(FLAGS) include/Modele/Joueur/Pretre.hpp -o bin/Modele/Joueur/Pretre.o -c

Mage.o: Joueur.o
	g++ $(FLAGS) include/Modele/Joueur/Mage.hpp -o bin/Modele/Joueur/Mage.o -c

Demoniste.o: Joueur.o
	g++ $(FLAGS) include/Modele/Joueur/Demoniste.hpp -o bin/Modele/Joueur/Demoniste.o -c

FinDeJeu.o:Observer.o Sujet.o 
	g++ $(FLAGS) include/Controleur/FinDeJeu.hpp -o bin/Controleur/FinDeJeu.o -c

LancementPartie.o:
	g++ $(FLAGS) include/Controleur/LancementPartie.hpp -o bin/Controleur/LancementPartie.o -c

clean:
	find -name *.o -print0 |xargs -0  rm



