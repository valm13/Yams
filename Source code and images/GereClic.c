#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GfxLib.h"
#include "BmpLib.h"
#include "Bouton.h"
#include "GestionDes.h"
#include "GereScore.h"
#include "GereFichier.h"
#include "GereClic.h"


void gereClicMenu(int *menu,int *mlangues,int *mjoueurs,int *msave,int *nbjoueurs,int *lg,tabbouton t,tabbouton *T,tabjoueur *tj)
{
	DonneesImageRGB *FR = NULL;
	DonneesImageRGB *EN = NULL;
	DonneesImageRGB *DE = NULL;
	FR = lisBMPRGB("FR-menu.bmp");
	EN = lisBMPRGB("EN-menu.bmp");
	DE = lisBMPRGB("DE-menu.bmp");
	
	if(*menu==1 && *mlangues==0 && *mjoueurs==0 && *msave ==0) // INTERFACE MENU PRINCIPAL
	{
		if((abscisseSouris()>t.b[0].p1.x) && (abscisseSouris()<t.b[0].p2.x) && (ordonneeSouris()>t.b[0].p1.y) && (ordonneeSouris()<t.b[0].p2.y))
		{
			*mlangues=1;
			
		}
		else if((abscisseSouris()>t.b[1].p1.x) && (abscisseSouris()<t.b[1].p2.x) && (ordonneeSouris()>t.b[1].p1.y) && (ordonneeSouris()<t.b[1].p2.y))
		{
			*mjoueurs=1;
			if((abscisseSouris()>t.b[2].p1.x) && (abscisseSouris()<t.b[2].p2.x) && (ordonneeSouris()>t.b[2].p1.y) && (ordonneeSouris()<t.b[2].p2.y))
			{
			*mjoueurs=0;
			}
		}
		
		if((abscisseSouris()>t.b[128].p1.x) && (abscisseSouris()<t.b[128].p2.x) && (ordonneeSouris()>t.b[128].p1.y) && (ordonneeSouris()<t.b[128].p2.y))
		{
			*msave=1;
			
		}
		if((abscisseSouris()>t.b[2].p1.x) && (abscisseSouris()<t.b[2].p2.x) && (ordonneeSouris()>t.b[2].p1.y) && (ordonneeSouris()<t.b[2].p2.y))
			{
			*menu=0;
			}
	}
	else if(*menu==1 && *mlangues==1 && *mjoueurs==0) // INTERFACE MENU LANGUE
	{

		
		if((abscisseSouris()>t.b[2].p1.x) && (abscisseSouris()<t.b[2].p2.x) && (ordonneeSouris()>t.b[2].p1.y) && (ordonneeSouris()<t.b[2].p2.y))
			{
			*mlangues=0;
			}
		if((abscisseSouris()>largeurFenetre()*2/17) && (abscisseSouris()<largeurFenetre()*2/17+FR->largeurImage) && (ordonneeSouris()>hauteurFenetre()*9/18) && (ordonneeSouris()<hauteurFenetre()*9/18+FR->hauteurImage))
			{
			*lg=1;
			lisTexteBouton(T,*lg);
			}
		if((abscisseSouris()>largeurFenetre()*7/17) && (abscisseSouris()<largeurFenetre()*7/17+EN->largeurImage) && (ordonneeSouris()>hauteurFenetre()*9/18) && (ordonneeSouris()<hauteurFenetre()*9/18+EN->hauteurImage))
			{
			*lg=2;
			lisTexteBouton(T,*lg);
			}
		if((abscisseSouris()>largeurFenetre()*12/17) && (abscisseSouris()<largeurFenetre()*12/17+DE->largeurImage) && (ordonneeSouris()>hauteurFenetre()*9/18) && (ordonneeSouris()<hauteurFenetre()*9/18+DE->hauteurImage))
			{
			*lg=3;
			lisTexteBouton(T,*lg);
			}
	}
	
	else if(*menu==1 && *mlangues==0 && *mjoueurs==1) // INTERFACE MENU JOUEURS
	{
		if((abscisseSouris()>t.b[2].p1.x) && (abscisseSouris()<t.b[2].p2.x) && (ordonneeSouris()>t.b[2].p1.y) && (ordonneeSouris()<t.b[2].p2.y))
			{
			*mjoueurs=0;
			}
		if((abscisseSouris()>t.b[4].p1.x) && (abscisseSouris()<t.b[4].p2.x) && (ordonneeSouris()>t.b[4].p1.y) && (ordonneeSouris()<t.b[4].p2.y))
			{
			*nbjoueurs=2;
			couleurCourante(0,0,0);
			rectangle(t.b[4].p1.x-10,t.b[4].p1.y-10,t.b[4].p2.x+10,t.b[4].p2.y+10);
			}
		if((abscisseSouris()>t.b[5].p1.x) && (abscisseSouris()<t.b[5].p2.x) && (ordonneeSouris()>t.b[5].p1.y) && (ordonneeSouris()<t.b[5].p2.y))
			{
			*nbjoueurs=3;
			}
		if((abscisseSouris()>t.b[6].p1.x) && (abscisseSouris()<t.b[6].p2.x) && (ordonneeSouris()>t.b[6].p1.y) && (ordonneeSouris()<t.b[6].p2.y))
			{
			*nbjoueurs=4;
			}
		if((abscisseSouris()>t.b[7].p1.x) && (abscisseSouris()<t.b[7].p2.x) && (ordonneeSouris()>t.b[7].p1.y) && (ordonneeSouris()<t.b[7].p2.y))
			{
			*nbjoueurs=5;
			}
	}
	else if(*menu==1 && *mlangues==0 && *mjoueurs==0 && *msave ==1) // INTERFACE MENU SAUVEGARDE
	{

		
		if((abscisseSouris()>t.b[2].p1.x) && (abscisseSouris()<t.b[2].p2.x) && (ordonneeSouris()>t.b[2].p1.y) && (ordonneeSouris()<t.b[2].p2.y))
			{
			*msave=0;
			}
			if((abscisseSouris()>t.b[129].p1.x) && (abscisseSouris()<t.b[129].p2.x) && (ordonneeSouris()>t.b[129].p1.y) && (ordonneeSouris()<t.b[129].p2.y))
			{
			
			Charger(tj,nbjoueurs,T); // Charge le fichier binaire et le fichier texte
			printf("\nPartie chargée");
			
			}
			if((abscisseSouris()>t.b[130].p1.x) && (abscisseSouris()<t.b[130].p2.x) && (ordonneeSouris()>t.b[130].p1.y) && (ordonneeSouris()<t.b[130].p2.y))
			{
			
			Sauver(tj,nbjoueurs,T); // Créer un fichier binaire pour les scores dans le tableau de joueur et un fichier texte pour le texte des boutons
			printf("\nPartie enregistrée");
			
			}
	}
}

void gereClicJeu(int *menu,int *lg,tabbouton *t,tbde *tableaudedes,tabjoueur *tj)
{
	DonneesImageRGB *FR = NULL;
	FR = lisBMPRGB("FR-jeu.bmp");
	if(*menu==0)
	{
		
		if((abscisseSouris()>t->b[13].p1.x) && (abscisseSouris()<t->b[13].p2.x) && (ordonneeSouris()>t->b[13].p1.y) && (ordonneeSouris()<t->b[13].p2.y)) // Menu
			{
			*menu=1;
			}

		if((abscisseSouris()>largeurFenetre()*14/25) && (abscisseSouris()<largeurFenetre()*14/25+FR->largeurImage) && (ordonneeSouris()>hauteurFenetre()*1/19) && (ordonneeSouris()<hauteurFenetre()*1/19+FR->hauteurImage))
			{
				changeLangue(lg,t);
			}
		if((abscisseSouris()>largeurFenetre()*31/34) && (abscisseSouris()<largeurFenetre()*31/34+50) && (ordonneeSouris()>hauteurFenetre()*(12-2*0)/18) && (ordonneeSouris()<hauteurFenetre()*(12-2*0)/18+50))
			{
			tableaudedes->d[0].slct = (tableaudedes->d[0].slct == 0)? 1:0;
			printf("1\n");
			}
		else if((abscisseSouris()>largeurFenetre()*31/34) && (abscisseSouris()<largeurFenetre()*31/34+50) && (ordonneeSouris()>hauteurFenetre()*(12-2*1)/18) && (ordonneeSouris()<hauteurFenetre()*(12-2*0)/18+50))
			{
			tableaudedes->d[1].slct = (tableaudedes->d[1].slct == 0)? 1:0;
			printf("2\n");
			}
		else if((abscisseSouris()>largeurFenetre()*31/34) && (abscisseSouris()<largeurFenetre()*31/34+50) && (ordonneeSouris()>hauteurFenetre()*(12-2*2)/18) && (ordonneeSouris()<hauteurFenetre()*(12-2*0)/18+50))
			{
			tableaudedes->d[2].slct = (tableaudedes->d[2].slct == 0)? 1:0;
			printf("3\n");
			}
		else if((abscisseSouris()>largeurFenetre()*31/34) && (abscisseSouris()<largeurFenetre()*31/34+50) && (ordonneeSouris()>hauteurFenetre()*(12-2*3)/18) && (ordonneeSouris()<hauteurFenetre()*(12-2*0)/18+50))
			{
			tableaudedes->d[3].slct = (tableaudedes->d[3].slct == 0)? 1:0;
			printf("4\n");
			}
		else if((abscisseSouris()>largeurFenetre()*31/34) && (abscisseSouris()<largeurFenetre()*31/34+50) && (ordonneeSouris()>hauteurFenetre()*(12-2*4)/18) && (ordonneeSouris()<hauteurFenetre()*(12-2*0)/18+50))
			{
			tableaudedes->d[4].slct = (tableaudedes->d[4].slct == 0)? 1:0;
			printf("5\n");
			}
			
		if((abscisseSouris()>t->b[12].p1.x) && (abscisseSouris()<t->b[12].p2.x) && (ordonneeSouris()>t->b[12].p1.y) && (ordonneeSouris()<t->b[12].p2.y)) // Relance les dés et change num_lancer dans le tableau de joueur
			{
			if(tj->num_lancer<3)
			{
				if(tableaudedes->d[0].slct==1 || tableaudedes->d[1].slct==1 || tableaudedes->d[2].slct==1 || tableaudedes->d[3].slct==1 || tableaudedes->d[4].slct==1)
				RegenDe(tableaudedes);
				if(tj->num_lancer == 1)
				{
				tj->num_lancer++;
				}
				else if(tj->num_lancer == 2)
				{
				tj->num_lancer++;
				}
				else if(tj->num_lancer == 3)
				{
				tj->num_lancer=1;
			}
			}
				
			}
	}
}

void changeLangue(int *lg,tabbouton *t)
{
				if(*lg==1)
				{
					lisTexteBouton(t,2);
					*lg=2;
				}
				else if(*lg==2)
				{
					lisTexteBouton(t,3);
					*lg=3;
				}
				else if(*lg==3)
				{
					lisTexteBouton(t,1);
					*lg=1;
				}
}

void gereClicScore(tabbouton *tbouton,tabjoueur *tjoueur,tbde *tableaudedes,int nbjoueurs)
{
	int n,i,j; // variable pour les bouton et tableau de joueur
	if(tjoueur->tour < 14)
	{
	if((abscisseSouris()>tbouton->b[38].p1.x) && (abscisseSouris()<tbouton->b[38].p2.x) && (tjoueur->joue == 1)) // Correspond à la colonne J1
	{
		n=1;
		i=38;
		j=0;
		printf("Colonne 1");
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 1");
			lesUns(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
			
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 2");
			lesDeux(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
			
		
			
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 3");
			lesTrois(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 4");
			lesQuatres(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 5");
			lesCinqs(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 6");
			lesSix(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		
		
		i=47;
		j=9;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 10");
			Brelan(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 11");
			Carre(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0) 
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 12");
			Full(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 13");
			PetiteSuite(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 14");
			GrandeSuite(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 15");
			Yahtzee(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0) 
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 16");
			Chance(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		ChangeJoueur(tjoueur,nbjoueurs);
		printf("\nLe joueur qui joue est maintenant le %d",tjoueur->joue);
	}
	else if((abscisseSouris()>tbouton->b[56].p1.x) && (abscisseSouris()<tbouton->b[56].p2.x) && (tjoueur->joue == 2)) // Correspond à la colonne J1
	{
		n=2;
		i=56;
		j=0;
		printf("Colonne 1");
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 1");
			lesUns(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
			
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 2");
			lesDeux(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
			
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 3");
			lesTrois(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 4");
			lesQuatres(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 5");
			lesCinqs(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 6");
			lesSix(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		
		
		i=65;
		j=9;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 10");
			Brelan(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 11");
			Carre(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0) 
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 12");
			Full(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 13");
			PetiteSuite(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 14");
			GrandeSuite(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 15");
			Yahtzee(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0) 
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 16");
			Chance(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		ChangeJoueur(tjoueur,nbjoueurs);
		printf("\nLe joueur qui joue est maintenant le %d",tjoueur->joue);
	}
	else if((abscisseSouris()>tbouton->b[74].p1.x) && (abscisseSouris()<tbouton->b[74].p2.x) && (tjoueur->joue == 3)) // Correspond à la colonne J1
	{
		n=3;
		i=74;
		j=0;
		printf("Colonne 1");
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 1");
			lesUns(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
			
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 2");
			lesDeux(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
			
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 3");
			lesTrois(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 4");
			lesQuatres(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 5");
			lesCinqs(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 6");
			lesSix(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		
		
		i=83;
		j=9;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 10");
			Brelan(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 11");
			Carre(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0) 
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 12");
			Full(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 13");
			PetiteSuite(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 14");
			GrandeSuite(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 15");
			Yahtzee(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0) 
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 16");
			Chance(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		ChangeJoueur(tjoueur,nbjoueurs);
		printf("\nLe joueur qui joue est maintenant le %d",tjoueur->joue);
		RelanceDes(tableaudedes);
	}
	else if((abscisseSouris()>tbouton->b[92].p1.x) && (abscisseSouris()<tbouton->b[92].p2.x) && (tjoueur->joue == 4)) // Correspond à la colonne J1
	{
		n=4;
		i=92;
		j=0;
		printf("Colonne 1");
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 1");
			lesUns(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
			
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 2");
			lesDeux(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
			
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 3");
			lesTrois(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 4");
			lesQuatres(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 5");
			lesCinqs(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 6");
			lesSix(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		
		
		i=101;
		j=9;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 10");
			Brelan(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 11");
			Carre(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0) 
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 12");
			Full(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 13");
			PetiteSuite(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 14");
			GrandeSuite(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 15");
			Yahtzee(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0) 
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 16");
			Chance(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		ChangeJoueur(tjoueur,nbjoueurs);
		printf("\nLe joueur qui joue est maintenant le %d",tjoueur->joue);
	}
	else if((abscisseSouris()>tbouton->b[110].p1.x) && (abscisseSouris()<tbouton->b[110].p2.x) && (tjoueur->joue == 5)) // Correspond à la colonne J1
	{
		n=5;
		i=110;
		j=0;
		printf("Colonne 1");
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 1");
			lesUns(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
			
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 2");
			lesDeux(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
			
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 3");
			lesTrois(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 4");
			lesQuatres(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 5");
			lesCinqs(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 6");
			lesSix(*tableaudedes,tjoueur,n); // On modifie le tableau de joueur n=1 pour y rentrer le score de total de 1
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		
		
		i=119;
		j=9;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 10");
			Brelan(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 11");
			Carre(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0) 
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 12");
			Full(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 13");
			PetiteSuite(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 14");
			GrandeSuite(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 15");
			Yahtzee(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0) 
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		}
		i++;
		j++;
		if((ordonneeSouris()<tbouton->b[i].p1.y) && (ordonneeSouris()>tbouton->b[i].p2.y) && tjoueur->j[n-1].s[j].slct == 0)
		{
			printf("Case 16");
			Chance(tbouton,*tableaudedes,tjoueur,n);
			if(tjoueur->j[n-1].s[j].valeur > 0)
			sprintf(tbouton->b[i].nom, "%d", tjoueur->j[n-1].s[j].valeur); // On met le contenu du score dans la chaine de caractère du bouton pour qu'il s'affiche ensuite
			else
			sprintf(tbouton->b[i].nom, "X");
			FinClicScore(tbouton,tjoueur,tableaudedes,n,nbjoueurs);
		}
		ChangeJoueur(tjoueur,nbjoueurs);
		printf("\nLe joueur qui joue est maintenant le %d",tjoueur->joue);
		
		}
	}
}

void FinClicScore(tabbouton *tb,tabjoueur *tj,tbde *tableaudedes,int n,int nbjoueurs)
{
	SousTotal(tb,tj,n);
	Bonus(tb,tj,n);
	TotalI(tb,tj,n);
	TotalII(tb,tj,n);
	Total(tb,tj,n);
	RelanceDes(tableaudedes);	
}

void Charger(tabjoueur *tj,int *nbjoueur,tabbouton *tbouton)
{
	FILE *f;
	f=fopen("save","rb"); // save score
	
	fread(&(tj->tour),sizeof(int),1,f);
	fread(&(tj->num_lancer),sizeof(int),1,f);
	fread(&(tj->joue),sizeof(int),1,f);
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<18;j++)
		{
			printf("\nscore[%d] de j[%d] charge",j,i);
			fread(&(tj->j[i].s[j].valeur),sizeof(int),1,f);
			fread(&(tj->j[i].s[j].slct),sizeof(int),1,f);
		}
	}
	fread(&nbjoueur,sizeof(int),1,f);
	fclose(f);

	f=fopen("savetexte","rt");
	for(int i= 0;i<18;i++)
	{
		fscanf(f,"%s\n",tbouton->b[38+i].nom);
	}
	for(int i= 0;i<18;i++)
	{
		fscanf(f,"%s\n",tbouton->b[56+i].nom);
	}
	for(int i= 0;i<18;i++)
	{
		fscanf(f,"%s\n",tbouton->b[74+i].nom);
	}
	for(int i= 0;i<18;i++)
	{
		fscanf(f,"%s\n",tbouton->b[92+i].nom);
	}
	for(int i= 0;i<18;i++)
	{
		fscanf(f,"%s\n",tbouton->b[110+i].nom);
	}
	fclose(f);
}

void Sauver(tabjoueur *tj,int *nbjoueur,tabbouton *tbouton)
{
	FILE *f;
	f=fopen("save","wb"); // save score
	
	fwrite(&(tj->tour),sizeof(int),1,f);
	fwrite(&(tj->num_lancer),sizeof(int),1,f);
	fwrite(&(tj->joue),sizeof(int),1,f);
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<18;j++)
		{
			fwrite(&(tj->j[i].s[j].valeur),sizeof(int),1,f);
			fwrite(&(tj->j[i].s[j].slct),sizeof(int),1,f);
		}
	}
	fwrite(&nbjoueur,sizeof(int),1,f);
	
	fclose(f);

	f=fopen("savetexte","wt");
	for(int i= 0;i<18;i++)
	{
		fprintf(f,"%s\n",tbouton->b[38+i].nom);
	}
	for(int i= 0;i<18;i++)
	{
		fprintf(f,"%s\n",tbouton->b[56+i].nom);
	}
	for(int i= 0;i<18;i++)
	{
		fprintf(f,"%s\n",tbouton->b[74+i].nom);
	}
	for(int i= 0;i<18;i++)
	{
		fprintf(f,"%s\n",tbouton->b[92+i].nom);
	}
	for(int i= 0;i<18;i++)
	{
		fprintf(f,"%s\n",tbouton->b[110+i].nom);
	}
	fclose(f);
}
