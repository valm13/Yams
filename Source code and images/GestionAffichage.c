#include <stdio.h>
#include <string.h>
#include "Bouton.h"
#include "GestionDes.h"
#include "GereScore.h"
#include "GfxLib.h"
#include "BmpLib.h"
#include "GestionAffichage.h"



void Quadrillage(int nbjoueur)
{
	int i,j,k;
	k=nbjoueur-2;
	couleurCourante(50,50,50);
		for(i=0;i<19;i++)
		{
			ligne(0,hauteurFenetre()*(1+i)/19,largeurFenetre()*(7+2*k)/25,hauteurFenetre()*(1+i)/19); // Ligne horizontale
		}
		for(j=0;j<nbjoueur+1;j++)
		{
			ligne(largeurFenetre()*(3+2*j)/25,0,largeurFenetre()*(3+2*j)/25,hauteurFenetre()); // Ligne verticales
		}
		
}

void afficheInfoGrille(tabbouton t,int nbjoueur) 
{
	for(int i=14;i<33;i++)
	{
	couleurCourante(t.b[i].crect.red,t.b[i].crect.green,t.b[i].crect.blue);
	rectangle(t.b[i].p1.x,t.b[i].p1.y,t.b[i].p2.x,t.b[i].p2.y);
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
	for(int i=33;i<33+nbjoueur;i++)
	{
	couleurCourante(t.b[i].crect.red,t.b[i].crect.green,t.b[i].crect.blue);
	rectangle(t.b[i].p1.x,t.b[i].p1.y,t.b[i].p2.x,t.b[i].p2.y);
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
}

void Menu(tabbouton t)
{
	int i;


	for(i=0;i<4;i++) // Affiche les boutons de menu principal langues et joueurs
	{
	couleurCourante(t.b[i].crect.red,t.b[i].crect.green,t.b[i].crect.blue);
	rectangle(t.b[i].p1.x,t.b[i].p1.y,t.b[i].p2.x,t.b[i].p2.y);
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
	for(i=128;i<129;i++)
	{
	couleurCourante(t.b[i].crect.red,t.b[i].crect.green,t.b[i].crect.blue);
	rectangle(t.b[i].p1.x,t.b[i].p1.y,t.b[i].p2.x,t.b[i].p2.y);
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
}
void MenuJoueurs(tabbouton t)
{
	
	int i;
	for(i=4;i<10;i++) // Affiche les boutons de menu principal langues et joueurs
	{
	couleurCourante(t.b[i].crect.red,t.b[i].crect.green,t.b[i].crect.blue);
	rectangle(t.b[i].p1.x,t.b[i].p1.y,t.b[i].p2.x,t.b[i].p2.y);
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
}
void MenuLangue(tabbouton t)
{
	DonneesImageRGB *FR = NULL;
	DonneesImageRGB *EN = NULL;
	DonneesImageRGB *DE = NULL;

	FR = lisBMPRGB("FR-menu.bmp");
	EN = lisBMPRGB("EN-menu.bmp");
	DE = lisBMPRGB("DE-menu.bmp");

	ecrisImage(largeurFenetre()*2/17, hauteurFenetre()*9/18, FR->largeurImage, FR->hauteurImage, FR->donneesRGB);
	ecrisImage(largeurFenetre()*7/17, hauteurFenetre()*9/18, EN->largeurImage, EN->hauteurImage, EN->donneesRGB);
	ecrisImage(largeurFenetre()*12/17, hauteurFenetre()*9/18, DE->largeurImage, DE->hauteurImage, DE->donneesRGB);
	libereDonneesImageRGB(&FR);
	libereDonneesImageRGB(&EN);
	libereDonneesImageRGB(&DE);
	for(int i=10;i<12;i++)
	{
		couleurCourante(t.b[i].crect.red,t.b[i].crect.green,t.b[i].crect.blue);
		rectangle(t.b[i].p1.x,t.b[i].p1.y,t.b[i].p2.x,t.b[i].p2.y);
		couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
		afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
}

void afficheDes(tbde t)
{
	DonneesImageRGB *des1 = NULL;
	DonneesImageRGB *des2 = NULL;
	DonneesImageRGB *des3 = NULL;
	DonneesImageRGB *des4 = NULL;
	DonneesImageRGB *des5 = NULL;
	DonneesImageRGB *des6 = NULL;

	des1 = lisBMPRGB("1-50px.bmp");
	des2 = lisBMPRGB("2-50px.bmp");
	des3 = lisBMPRGB("3-50px.bmp");
	des4 = lisBMPRGB("4-50px.bmp");
	des5 = lisBMPRGB("5-50px.bmp");
	des6 = lisBMPRGB("6-50px.bmp");
	for(int i=0;i<5;i++)
	{
	if(t.d[i].v == 1)
	{
	ecrisImage(largeurFenetre()*31/34, hauteurFenetre()*(12-2*i)/18, des1->largeurImage, des1->hauteurImage, des1->donneesRGB);
	}
	else if(t.d[i].v == 2)
	ecrisImage(largeurFenetre()*31/34, hauteurFenetre()*(12-2*i)/18, des2->largeurImage, des2->hauteurImage, des2->donneesRGB);
	
	else if(t.d[i].v == 3)
	ecrisImage(largeurFenetre()*31/34, hauteurFenetre()*(12-2*i)/18, des3->largeurImage, des3->hauteurImage, des3->donneesRGB);
	
	else if(t.d[i].v == 4)
	ecrisImage(largeurFenetre()*31/34, hauteurFenetre()*(12-2*i)/18, des4->largeurImage, des4->hauteurImage, des4->donneesRGB);
	
	else if(t.d[i].v == 5)
	ecrisImage(largeurFenetre()*31/34, hauteurFenetre()*(12-2*i)/18, des5->largeurImage, des5->hauteurImage, des5->donneesRGB);
	
	else if(t.d[i].v== 6)
	ecrisImage(largeurFenetre()*31/34, hauteurFenetre()*(12-2*i)/18, des6->largeurImage, des6->hauteurImage, des6->donneesRGB);
	}

	for(int i=0;i<5;i++)
	{
		couleurCourante(0,150,250);
		if(t.d[i].slct==1)
		{
			ligne(largeurFenetre()*31/34-5,hauteurFenetre()*(12-2*i)/18-5,largeurFenetre()*31/34+55,hauteurFenetre()*(12-2*i)/18-5); //Horizontale Bas
			ligne(largeurFenetre()*31/34-5,hauteurFenetre()*(12-2*i)/18-5,largeurFenetre()*31/34-5,hauteurFenetre()*(12-2*i)/18+55); //Verticale Gauche
			ligne(largeurFenetre()*31/34-5,hauteurFenetre()*(12-2*i)/18+55,largeurFenetre()*31/34+55,hauteurFenetre()*(12-2*i)/18+55); //Horizontale Haut
			ligne(largeurFenetre()*31/34+55,hauteurFenetre()*(12-2*i)/18-5,largeurFenetre()*31/34+55,hauteurFenetre()*(12-2*i)/18+55); //Verticale Droite
		}
	}
}

void afficheBaniere()
{
	DonneesImageRGB *banniere = NULL;
	banniere = lisBMPRGB("Banniere-384px.bmp");
	ecrisImage(416, 486, banniere->largeurImage, banniere->hauteurImage, banniere->donneesRGB); // A modifier en fonction du nombre de joueur avec plusieurs images
	libereDonneesImageRGB(&banniere);
}

void afficheBoutonjeu(tabbouton t)
{
for(int i=12;i<14;i++) // Affiche les boutons de jeu mais aussi les cases de la grille
	{
	couleurCourante(t.b[i].crect.red,t.b[i].crect.green,t.b[i].crect.blue);
	rectangle(t.b[i].p1.x,t.b[i].p1.y,t.b[i].p2.x,t.b[i].p2.y);
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
}

void afficheLangue(int lg)
{
	DonneesImageRGB *FR = NULL;
	DonneesImageRGB *EN = NULL;
	DonneesImageRGB *DE = NULL;

	FR = lisBMPRGB("FR-jeu.bmp");
	EN = lisBMPRGB("EN-jeu.bmp");
	DE = lisBMPRGB("DE-jeu.bmp");
	if(lg==1)
	ecrisImage(largeurFenetre()*14/25, hauteurFenetre()*1/19, FR->largeurImage, FR->hauteurImage, FR->donneesRGB);
	if(lg==2)
	ecrisImage(largeurFenetre()*14/25, hauteurFenetre()*1/19, EN->largeurImage, EN->hauteurImage, EN->donneesRGB);
	if(lg==3)
	ecrisImage(largeurFenetre()*14/25, hauteurFenetre()*1/19, DE->largeurImage, DE->hauteurImage, DE->donneesRGB);
	libereDonneesImageRGB(&FR);
	libereDonneesImageRGB(&EN);
	libereDonneesImageRGB(&DE);
}


void afficheScore(tabbouton t,int nbjoueurs)
{
	if(nbjoueurs==2)
	{
	for(int i=38;i<74;i++)
	{
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
	}
	else if(nbjoueurs==3)
	{
	for(int i=38;i<92;i++)
	{
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
	}
	else if(nbjoueurs==4)
	{
	for(int i=38;i<110;i++)
	{
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
	}
	else if(nbjoueurs==5)
	{
	for(int i=38;i<128;i++)
	{
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
	}
}

void afficheJoueur(tabjoueur t,int lg) // A traduire en allemand et anglais en fonction de lg
{
	char ch[30];
	if(lg==1)
	sprintf(ch,"C'est au tour du joueur %d",t.joue);
	else if(lg==2)
	sprintf(ch,"It's the turn of the player %d",t.joue);
	else if(lg==3)
	sprintf(ch,"Spieler %d Runde",t.joue);
	couleurCourante(0,0,0);
	afficheChaine(ch,12,largeurFenetre()*15/25,hauteurFenetre()*15/38);
}

void afficheTour(tabjoueur t,int lg)
{
	char ch[30];
	if(lg==1)
	sprintf(ch,"Tour n°%d",t.tour);
	else if(lg==2)
	sprintf(ch,"Round n°%d",t.tour);
	else if(lg==3)
	sprintf(ch,"Runde n°%d",t.tour);
	couleurCourante(0,0,0);
	afficheChaine(ch,12,largeurFenetre()*15/25,hauteurFenetre()*18/38);
}

void afficheLancer(tabjoueur t,int lg)
{
	char ch[30];
	if(lg==1)
	sprintf(ch,"Lancer n°%d",t.num_lancer);
	else if(lg==2)
	sprintf(ch,"Roll n°%d",t.num_lancer);
	else if(lg==3)
	sprintf(ch,"Wurfeln n°%d",t.num_lancer);
	couleurCourante(0,0,0);
	afficheChaine(ch,12,largeurFenetre()*15/25,hauteurFenetre()*12/38);
}

void MenuSauvegarde(tabbouton t)
{
	int i;
	i=2;
	couleurCourante(t.b[i].crect.red,t.b[i].crect.green,t.b[i].crect.blue);
	rectangle(t.b[i].p1.x,t.b[i].p1.y,t.b[i].p2.x,t.b[i].p2.y);
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	
	for(i=129;i<131;i++) // Affiche les boutons de menu principal langues et joueurs
	{
	couleurCourante(t.b[i].crect.red,t.b[i].crect.green,t.b[i].crect.blue);
	rectangle(t.b[i].p1.x,t.b[i].p1.y,t.b[i].p2.x,t.b[i].p2.y);
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	}
	i=131;
	couleurCourante(t.b[i].ctexte.red,t.b[i].ctexte.green,t.b[i].ctexte.blue);
	afficheChaine(t.b[i].nom,t.b[i].police,t.b[i].txt.x,t.b[i].txt.y);
	
}
