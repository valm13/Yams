#include <stdlib.h> // Pour pouvoir utiliser exit()
#include <stdio.h> // Pour pouvoir utiliser printf()
#include <time.h>
#include <string.h>
#include "GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "BmpLib.h" // Cet include permet de manipuler des fichiers BMP
#include "GestionDes.h" // Pour générer les dés
#include "Bouton.h" // Pour gérer les boutons
#include "GereScore.h"
#include "GestionAffichage.h" // Pour gérer l'affichage
#include "GereClic.h"
#include "GereFichier.h"



// Largeur et hauteur par defaut d'une image correspondant a nos criteres
#define LargeurFenetre 800
#define HauteurFenetre 600

/* La fonction de gestion des evenements, appelee automatiquement par le systeme
des qu'une evenement survient */
void gestionEvenement(EvenementGfx evenement);



int main(int argc, char **argv)
{
	initialiseGfx(argc, argv);
	srand(time(NULL));
	
	prepareFenetreGraphique("Yam's'", LargeurFenetre, HauteurFenetre);
	
	/* Lance la boucle qui aiguille les evenements sur la fonction gestionEvenement ci-apres,
		qui elle-meme utilise fonctionAffichage ci-dessous */
	lanceBoucleEvenements();
	
	return 0;
}

/* La fonction de gestion des evenements, appelee automatiquement par le systeme
des qu'une evenement survient */
void gestionEvenement(EvenementGfx evenement)
{
	static bool pleinEcran = false;

	//static tabbouton Bjeu,Bjoueurs,Blangues;
	static tbde tableau_de_des;
	static tabbouton t;
	static tabjoueur tj;
	static int nbjoueurs = 2;
	static int menu = 1;
	static int mlangues = 0;
	static int mjoueurs = 0;
	static int msave = 0;

	static int lg = 1;
	static chaine nomFichier;
	strcpy(nomFichier,"Description");
	
	switch (evenement)
	{
		case Initialisation:
			demandeTemporisation(20);
			t=lisDescriptionBouton(nomFichier);
			lisTexteBouton(&t,1);
			tableau_de_des=InitialiseDe(tableau_de_des);
			initialiseTabJoueur(&tj);
			

			break;
		
		case Temporisation:
			rafraichisFenetre();
			
			break;
			
		case Affichage:
			effaceFenetre(255,255,255);
			if(menu==1)
			{
				if(mlangues == 0 && mjoueurs == 0 && msave ==0)
				{
					Menu(t);
				}
				if(mlangues==1)
				{
					MenuLangue(t);
				}
				if(mjoueurs==1)
				{
					MenuJoueurs(t);
				}
				if(msave==1)
				{
					MenuSauvegarde(t);
				}
			}
			if(menu==0)
			{
			afficheInfoGrille(t,nbjoueurs);
			Quadrillage(nbjoueurs);
			
			afficheScore(t,nbjoueurs);
			
			afficheJoueur(tj,lg);
			afficheTour(tj,lg);
			afficheLancer(tj,lg);
			
			afficheDes(tableau_de_des);
			afficheBaniere();
			afficheBoutonjeu(t);
			afficheLangue(lg);
			}
			break;
			
		case Clavier:
			printf("%c : ASCII %d\n", caractereClavier(), caractereClavier());

			switch (caractereClavier())
			{
				case 'Q': /* Pour sortir quelque peu proprement du programme */
				case 'q':
					termineBoucleEvenements();
					break;

				case 'F':
				case 'f':
					pleinEcran = !pleinEcran; // Changement de mode plein ecran
					if (pleinEcran)
						modePleinEcran();
					else
						redimensionneFenetre(LargeurFenetre, HauteurFenetre);
					break;

				case 'R':
				case 'r':
					// Configure le systeme pour generer un message Temporisation
					// toutes les 20 millisecondes (rapide)
					demandeTemporisation(20);
					break;

				case 'S':
				case 's':
					// Configure le systeme pour ne plus generer de message Temporisation
					demandeTemporisation(-1);
					break;
					
				case 'A':
				case 'a':
					RegenDe(&tableau_de_des);
					break;
					
				case '+':
					// Rajoute des joueurs;
					if(nbjoueurs<5)
					nbjoueurs++;
					break;
					
				case '-':
					// Rajoute des joueurs;
					if(nbjoueurs>2)
					nbjoueurs--;
					break;
					
			}
			break;
			
		case ClavierSpecial:
			printf("ASCII %d\n", toucheClavier());
			break;

		case BoutonSouris:
		if (etatBoutonSouris() == GaucheAppuye)
		{
			if(menu==1)
			gereClicMenu(&menu,&mlangues,&mjoueurs,&msave,&nbjoueurs,&lg,t,&t,&tj);
			if(menu==0)
			{
				gereClicJeu(&menu,&lg,&t,&tableau_de_des,&tj);
				gereClicScore(&t,&tj,&tableau_de_des,nbjoueurs);
				//gereClicSave(tj,tableau_de_des,nbjoueurs,lg);
			}
		}
			break;
		
		case Souris: // Si la souris est deplacee
			break;
		
		case Inactivite: // Quand aucun message n'est disponible
			break;
		
		case Redimensionnement: 
			printf("Largeur : %d\t", largeurFenetre());
			printf("Hauteur : %d\n", hauteurFenetre());
			break;
	}
}
