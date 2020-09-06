#include <stdio.h>
#include <stdlib.h>
#include "GestionDes.h"
#include "Bouton.h"
#include "GereScore.h"

void initialiseTabJoueur(tabjoueur *tj)
{
	int i;
	tj->tour=1;
	tj->joue=1;
	tj->num_lancer=1;
	for(i=0;i<5;i++)
	{
	for(int j=0;j<18;j++)
	{
		tj->j[i].s[j].slct=0;
		tj->j[i].s[j].valeur=0;
	}
	}
}

void lesUns(tbde tableau_de_des,tabjoueur *tj,int n)
{
	int x = 1;
	int cas = 1;
	int nombre = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	for(int i=0;i<5;i++)
	{
	if(tableau_de_des.d[i].v == 1)
	nombre++;
	}
	tj->j[n-1].s[cas-1].slct=1;
	tj->j[n-1].s[cas-1].valeur=x*nombre;
	}
}

void lesDeux(tbde tableau_de_des,tabjoueur *tj,int n)
{
	int x = 2;
	int cas = 2;
	int nombre = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	for(int i=0;i<5;i++)
	{
	if(tableau_de_des.d[i].v == 2)
	nombre++;
	}
	tj->j[n-1].s[cas-1].slct=1;
	tj->j[n-1].s[cas-1].valeur=x*nombre;
	}
}

void lesTrois(tbde tableau_de_des,tabjoueur *tj,int n)
{
	int x = 3;
	int cas = 3;
	int nombre = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	for(int i=0;i<5;i++)
	{
	if(tableau_de_des.d[i].v == 3)
	nombre++;
	}
	tj->j[n-1].s[cas-1].slct=1;
	tj->j[n-1].s[cas-1].valeur=x*nombre;
	}
}

void lesQuatres(tbde tableau_de_des,tabjoueur *tj,int n)
{
	int x = 4;
	int cas = 4;
	int nombre = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	for(int i=0;i<5;i++)
	{
	if(tableau_de_des.d[i].v == 4)
	nombre++;
	}
	tj->j[n-1].s[cas-1].slct=1;
	tj->j[n-1].s[cas-1].valeur=x*nombre;
	}
}

void lesCinqs(tbde tableau_de_des,tabjoueur *tj,int n)
{
	int x = 5;
	int cas = 5;
	int nombre = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	for(int i=0;i<5;i++)
	{
	if(tableau_de_des.d[i].v == 5)
	nombre++;
	}
	tj->j[n-1].s[cas-1].slct=1;
	tj->j[n-1].s[cas-1].valeur=x*nombre;
	}
}

void lesSix(tbde tableau_de_des,tabjoueur *tj,int n)
{
	int x = 6;
	int cas = 6;
	int nombre = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	for(int i=0;i<5;i++)
	{
	if(tableau_de_des.d[i].v == 6)
	nombre++;
	}
	tj->j[n-1].s[cas-1].slct=1;
	tj->j[n-1].s[cas-1].valeur=x*nombre;
	}
}

void SousTotal(tabbouton *tbouton,tabjoueur *tj,int n)
{
	int cas = 7;
	tj->j[n-1].s[6].valeur = 0;
	if(tj->joue==1)
	{
	for(int i=0;i<6;i++)
	{
		tj->j[n-1].s[cas-1].valeur+=tj->j[n-1].s[i].valeur;
	}
	sprintf(tbouton->b[38+6].nom, "%d", tj->j[n-1].s[6].valeur);
	}
	else if(tj->joue==2)
	{
	for(int i=0;i<6;i++)
	{
		tj->j[n-1].s[cas-1].valeur+=tj->j[n-1].s[i].valeur;
	}
	sprintf(tbouton->b[56+6].nom, "%d", tj->j[n-1].s[6].valeur);
	}
	else if(tj->joue==3)
	{
	for(int i=0;i<6;i++)
	{
		tj->j[n-1].s[cas-1].valeur+=tj->j[n-1].s[i].valeur;
	}
	sprintf(tbouton->b[74+6].nom, "%d", tj->j[n-1].s[6].valeur);
	}
	else if(tj->joue==4)
	{
	for(int i=0;i<6;i++)
	{
		tj->j[n-1].s[cas-1].valeur+=tj->j[n-1].s[i].valeur;
	}
	sprintf(tbouton->b[92+6].nom, "%d", tj->j[n-1].s[6].valeur);
	}
	else if(tj->joue==5)
	{
	for(int i=0;i<6;i++)
	{
		tj->j[n-1].s[cas-1].valeur+=tj->j[n-1].s[i].valeur;
	}
	sprintf(tbouton->b[110+6].nom, "%d", tj->j[n-1].s[6].valeur);;
	}

}

void Bonus(tabbouton *tbouton,tabjoueur *tj,int n)
{
	int cas = 8;
	if(tj->j[n-1].s[6].valeur >= 63)
	{
		tj->j[n-1].s[cas-1].valeur=35;
	}
	
	if(tj->joue==1)
	{
	sprintf(tbouton->b[38+7].nom, "%d", tj->j[n-1].s[7].valeur);
	}
	else if(tj->joue==2)
	{
	sprintf(tbouton->b[56+7].nom, "%d", tj->j[n-1].s[7].valeur);
	}
	else if(tj->joue==3)
	{
	sprintf(tbouton->b[74+7].nom, "%d", tj->j[n-1].s[7].valeur);
	}
	else if(tj->joue==4)
	{
	sprintf(tbouton->b[92+7].nom, "%d", tj->j[n-1].s[7].valeur);
	}
	else if(tj->joue==5)
	{
	sprintf(tbouton->b[110+7].nom, "%d", tj->j[n-1].s[7].valeur);
	}

	
	if(tj->j[n-1].s[6].valeur >= 63)
	{
		tj->j[n-1].s[cas-1].valeur=35;
	}
	sprintf(tbouton->b[38+7].nom, "%d", tj->j[n-1].s[7].valeur);
	
}

void TotalI(tabbouton *tbouton,tabjoueur *tj,int n)
{
	int cas = 9;
	if(tj->joue==1)
	{
	tj->j[n-1].s[cas-1].valeur=tj->j[n-1].s[6].valeur+tj->j[n-1].s[7].valeur;
	sprintf(tbouton->b[38+8].nom, "%d", tj->j[n-1].s[8].valeur);
	}
	else if(tj->joue==2)
	{
	tj->j[n-1].s[cas-1].valeur=tj->j[n-1].s[6].valeur+tj->j[n-1].s[7].valeur;
	sprintf(tbouton->b[56+8].nom, "%d", tj->j[n-1].s[8].valeur);
	}
	else if(tj->joue==3)
	{
	tj->j[n-1].s[cas-1].valeur=tj->j[n-1].s[6].valeur+tj->j[n-1].s[7].valeur;
	sprintf(tbouton->b[74+8].nom, "%d", tj->j[n-1].s[8].valeur);
	}
	else if(tj->joue==4)
	{
	tj->j[n-1].s[cas-1].valeur=tj->j[n-1].s[6].valeur+tj->j[n-1].s[7].valeur;
	sprintf(tbouton->b[92+8].nom, "%d", tj->j[n-1].s[8].valeur);
	}
	else if(tj->joue==5)
	{
	tj->j[n-1].s[cas-1].valeur=tj->j[n-1].s[6].valeur+tj->j[n-1].s[7].valeur;
	sprintf(tbouton->b[110+8].nom, "%d", tj->j[n-1].s[8].valeur);
	}

}

void Brelan(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n)
{
	int cas = 10;
	int nb1 = 0;
	int nb2 = 0;
	int nb3 = 0;
	int nb4 = 0;
	int nb5 = 0;
	int nb6 = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	for(int i=0;i<5;i++)
	{
		switch(tableau_de_des.d[i].v)
		{
		case 1:
		nb1++;
		break;
		case 2:
		nb2++;
		break;
		case 3:
		nb3++;
		break;
		case 4:
		nb4++;
		break;
		case 5:
		nb5++;
		break;
		case 6:
		nb6++;
		break;
		}
	}
	if(nb1==3)
	tj->j[n-1].s[cas-1].valeur=3*1;
	else if(nb2==3)
	tj->j[n-1].s[cas-1].valeur=3*2;
	else if(nb3==3)
	tj->j[n-1].s[cas-1].valeur=3*3;
	else if(nb4==3)
	tj->j[n-1].s[cas-1].valeur=3*4;
	else if(nb5==3)
	tj->j[n-1].s[cas-1].valeur=3*5;
	else if(nb6==3)
	tj->j[n-1].s[cas-1].valeur=3*6;

	tj->j[n-1].s[cas-1].slct=1;

	}
	
}

void Carre(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n)//11
{
	
	int cas = 11;
	int nb1 = 0;
	int nb2 = 0;
	int nb3 = 0;
	int nb4 = 0;
	int nb5 = 0;
	int nb6 = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	for(int i=0;i<5;i++)
	{
		switch(tableau_de_des.d[i].v)
		{
		case 1:
		nb1++;
		break;
		case 2:
		nb2++;
		break;
		case 3:
		nb3++;
		break;
		case 4:
		nb4++;
		break;
		case 5:
		nb5++;
		break;
		case 6:
		nb6++;
		break;
		}
	}
	if(nb1==4)
	tj->j[n-1].s[cas-1].valeur=4*1;
	else if(nb2==4)
	tj->j[n-1].s[cas-1].valeur=4*2;
	else if(nb3==4)
	tj->j[n-1].s[cas-1].valeur=4*3;
	else if(nb4==4)
	tj->j[n-1].s[cas-1].valeur=4*4;
	else if(nb5==4)
	tj->j[n-1].s[cas-1].valeur=4*5;
	else if(nb6==4)
	tj->j[n-1].s[cas-1].valeur=4*6;

	tj->j[n-1].s[cas-1].slct=1;

	}
	
}

int BrelanFull(tbde tableau_de_des,int n)
{
	int a = -1;
	int nb1 = 0;
	int nb2 = 0;
	int nb3 = 0;
	int nb4 = 0;
	int nb5 = 0;
	int nb6 = 0;
	for(int i=0;i<5;i++)
	{
		switch(tableau_de_des.d[i].v)
		{
		case 1:
		nb1++;
		break;
		case 2:
		nb2++;
		break;
		case 3:
		nb3++;
		break;
		case 4:
		nb4++;
		break;
		case 5:
		nb5++;
		break;
		case 6:
		nb6++;
		break;
		}
	}
	if(nb1==3)
	a=1;
	else if(nb2==3)
	a=2;
	else if(nb3==3)
	a=3;
	else if(nb4==3)
	a=4;
	else if(nb5==3)
	a=5;
	else if(nb6==3)
	a=6;

	return a;
}

int DeuxlanFull(tbde tableau_de_des,int n)
{
	int a = -1;
	int nb1 = 0;
	int nb2 = 0;
	int nb3 = 0;
	int nb4 = 0;
	int nb5 = 0;
	int nb6 = 0;
	for(int i=0;i<5;i++)
	{
		switch(tableau_de_des.d[i].v)
		{
		case 1:
		nb1++;
		break;
		case 2:
		nb2++;
		break;
		case 3:
		nb3++;
		break;
		case 4:
		nb4++;
		break;
		case 5:
		nb5++;
		break;
		case 6:
		nb6++;
		break;
		}
	}
	if(nb1==2)
	a=1;
	else if(nb2==2)
	a=2;
	else if(nb3==2)
	a=3;
	else if(nb4==2)
	a=4;
	else if(nb5==2)
	a=5;
	else if(nb6==2)
	a=6;

	return a;
}

void Full(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n)//12
{
	int cas = 12;
	int a,b;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	a=BrelanFull(tableau_de_des,n);
	b=DeuxlanFull(tableau_de_des,n);
	if(a != b)
	{
	tj->j[n-1].s[cas-1].valeur=25;
	}
	if((a == -1) || (b == -1))
	{
	tj->j[n-1].s[cas-1].valeur=0;
	}
	tj->j[n-1].s[cas-1].slct=1;
	}
}

void PetiteSuite(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n)//13 // Probleme lorsque l'on n'a pas de petite suite : coredumped
{
	int cas = 13;
	int T[6] = {0, 0, 0, 0, 0, 0};
	tbde tabdecopie;
	int a;
	int nb = 0;
	int uns = 0;
	int deux = 0;
	int trois = 0;
	int quatres = 0;
	int cinqs = 0;
	int six = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	
	for(int i=0;i<6;i++)
	{
		a=tableau_de_des.d[i].v;		 // Ex: On a dans tableau_de_des : 3,2,6,6,5 On aura donc dans T : 0,1,1,0,1,2
		if(a==1)
		uns++;
		else if(a==2)
		deux++;
		else if(a==3)
		trois++;
		else if(a==4)
		quatres++;
		else if(a==5)
		cinqs++;
		else if(a==6)
		six++;
	}
	T[0]=uns;
	T[1]=deux;
	T[2]=trois;
	T[3]=quatres;
	T[4]=cinqs;
	T[5]=six;
	
	printf("\n");
	for(int i=0;i<6;i++)
	printf("T[%d] = %d \n",i,T[i]);
	
	for(int i=0;i<T[0];i++)
	{	
	tabdecopie.d[i].v = 1;
	nb++;
	}
	
	for(int i=0;i<T[1];i++)
	{
	tabdecopie.d[nb].v = 2;
	nb++;
	}
	
	for(int i=0;i<T[2];i++)
	{
	tabdecopie.d[nb].v = 3;
	nb++;
	}
	
	for(int i=0;i<T[3];i++)
	{
	tabdecopie.d[nb].v = 4;
	nb++;
	}
	
	for(int i=0;i<T[4];i++)
	{
	tabdecopie.d[nb].v = 5;
	nb++;
	}
	
	for(int i=0;i<T[5];i++)
	{
	tabdecopie.d[nb].v = 6;
	nb++;
	}			// Ex: On a donc ici dans la copie du tableau de des en ordonne : 2,3,5,6,6	

	for(int i=0;i<5;i++)
	printf("tabdecopie.d[%d].v  = %d  \n",i,tabdecopie.d[i].v );
	if(
	((tabdecopie.d[0].v == 1) && (tabdecopie.d[1].v == 1) && (tabdecopie.d[2].v == 2) && (tabdecopie.d[3].v == 3) && (tabdecopie.d[4].v == 4)) ||
	((tabdecopie.d[0].v == 1) && (tabdecopie.d[1].v == 2) && (tabdecopie.d[2].v == 2) && (tabdecopie.d[3].v == 3) && (tabdecopie.d[4].v == 4)) ||
	((tabdecopie.d[0].v == 1) && (tabdecopie.d[1].v == 2) && (tabdecopie.d[2].v == 3) && (tabdecopie.d[3].v == 3) && (tabdecopie.d[4].v == 4)) ||
	((tabdecopie.d[0].v == 1) && (tabdecopie.d[1].v == 2) && (tabdecopie.d[2].v == 3) && (tabdecopie.d[3].v == 4) && (tabdecopie.d[4].v == 4)) ||
	((tabdecopie.d[0].v == 1) && (tabdecopie.d[1].v == 2) && (tabdecopie.d[2].v == 3) && (tabdecopie.d[3].v == 4) && (tabdecopie.d[4].v == 5)) ||
	((tabdecopie.d[0].v == 1) && (tabdecopie.d[1].v == 2) && (tabdecopie.d[2].v == 3) && (tabdecopie.d[3].v == 4) && (tabdecopie.d[4].v == 6)) ||
	((tabdecopie.d[0].v == 2) && (tabdecopie.d[1].v == 2) && (tabdecopie.d[2].v == 3) && (tabdecopie.d[3].v == 4) && (tabdecopie.d[4].v == 5)) ||
	((tabdecopie.d[0].v == 2) && (tabdecopie.d[1].v == 3) && (tabdecopie.d[2].v == 3) && (tabdecopie.d[3].v == 4) && (tabdecopie.d[4].v == 5)) ||
	((tabdecopie.d[0].v == 2) && (tabdecopie.d[1].v == 3) && (tabdecopie.d[2].v == 4) && (tabdecopie.d[3].v == 4) && (tabdecopie.d[4].v == 5)) ||
	((tabdecopie.d[0].v == 2) && (tabdecopie.d[1].v == 3) && (tabdecopie.d[2].v == 4) && (tabdecopie.d[3].v == 5) && (tabdecopie.d[4].v == 5)) ||
	((tabdecopie.d[0].v == 2) && (tabdecopie.d[1].v == 3) && (tabdecopie.d[2].v == 4) && (tabdecopie.d[3].v == 5) && (tabdecopie.d[4].v == 6)) ||
	((tabdecopie.d[0].v == 1) && (tabdecopie.d[1].v == 3) && (tabdecopie.d[2].v == 4) && (tabdecopie.d[3].v == 5) && (tabdecopie.d[4].v == 6)) ||
	((tabdecopie.d[0].v == 3) && (tabdecopie.d[1].v == 3) && (tabdecopie.d[2].v == 4) && (tabdecopie.d[3].v == 5) && (tabdecopie.d[4].v == 6)) ||
	((tabdecopie.d[0].v == 3) && (tabdecopie.d[1].v == 4) && (tabdecopie.d[2].v == 4) && (tabdecopie.d[3].v == 5) && (tabdecopie.d[4].v == 6)) ||
	((tabdecopie.d[0].v == 3) && (tabdecopie.d[1].v == 4) && (tabdecopie.d[2].v == 5) && (tabdecopie.d[3].v == 5) && (tabdecopie.d[4].v == 6)) ||
	((tabdecopie.d[0].v == 3) && (tabdecopie.d[1].v == 4) && (tabdecopie.d[2].v == 5) && (tabdecopie.d[3].v == 5) && (tabdecopie.d[4].v == 6)))
	{
		tj->j[n-1].s[cas-1].valeur=30; // Condition : fonctionnelle
	}
	else
	{
		tj->j[n-1].s[cas-1].valeur=0;
	}
	tj->j[n-1].s[cas-1].slct=1;
	}
	
}

void GrandeSuite(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n)//14
{
	int cas = 14;
	int T[6] = {0, 0, 0, 0, 0, 0};
	tbde tabdecopie;
	int a;
	int nb = 0;
	int uns = 0;
	int deux = 0;
	int trois = 0;
	int quatres = 0;
	int cinqs = 0;
	int six = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	for(int i=0;i<6;i++)
	{
		a=tableau_de_des.d[i].v;		 // Ex: On a dans tableau_de_des : 3,2,6,6,5 On aura donc dans T : 0,1,1,0,1,2
		if(a==1)
		uns++;
		else if(a==2)
		deux++;
		else if(a==3)
		trois++;
		else if(a==4)
		quatres++;
		else if(a==5)
		cinqs++;
		else if(a==6)
		six++;
	}
	T[0]=uns;
	T[1]=deux;
	T[2]=trois;
	T[3]=quatres;
	T[4]=cinqs;
	T[5]=six;
	printf("\n");
	for(int i=0;i<6;i++)
	printf("T[0] = %d \n",T[0]);
			
	for(int i=0;i<T[0];i++)
	{	
	tabdecopie.d[i].v = 1;
	nb++;
	}
	
	for(int i=0;i<T[1];i++)
	{
	tabdecopie.d[nb].v = 2;
	nb++;
	}
	
	for(int i=0;i<T[2];i++)
	{
	tabdecopie.d[nb].v = 3;
	nb++;
	}
	
	for(int i=0;i<T[3];i++)
	{
	tabdecopie.d[nb].v = 4;
	nb++;
	}
	
	for(int i=0;i<T[4];i++)
	{
	tabdecopie.d[nb].v = 5;
	nb++;
	}
	
	for(int i=0;i<T[5];i++)
	{
	tabdecopie.d[nb].v = 6;
	nb++;
	}

	for(int i=0;i<5;i++)
	printf("tabdecopie.d[%d].v  = %d  \n",i,tabdecopie.d[i].v );
	if(
	((tabdecopie.d[0].v == 1) && (tabdecopie.d[1].v == 2) && (tabdecopie.d[2].v == 3) && (tabdecopie.d[3].v == 4) && (tabdecopie.d[4].v == 5)) ||
	((tabdecopie.d[0].v == 2) && (tabdecopie.d[1].v == 3) && (tabdecopie.d[2].v == 4) && (tabdecopie.d[3].v == 5) && (tabdecopie.d[4].v == 6)))
	{
		tj->j[n-1].s[cas-1].valeur=40;
	}
	else
	{
		tj->j[n-1].s[cas-1].valeur=0;
	}
	tj->j[n-1].s[cas-1].slct=1;
	}
	
}

void Yahtzee(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n)//15
{
	int cas = 15;
	int nb1 = 0;
	int nb2 = 0;
	int nb3 = 0;
	int nb4 = 0;
	int nb5 = 0;
	int nb6 = 0;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	for(int i=0;i<5;i++)
	{
		switch(tableau_de_des.d[i].v)
		{
		case 1:
		nb1++;
		break;
		case 2:
		nb2++;
		break;
		case 3:
		nb3++;
		break;
		case 4:
		nb4++;
		break;
		case 5:
		nb5++;
		break;
		case 6:
		nb6++;
		break;
		}
	}
	if(nb1==5)
	tj->j[n-1].s[cas-1].valeur=50;
	else if(nb2==5)
	tj->j[n-1].s[cas-1].valeur=50;
	else if(nb3==5)
	tj->j[n-1].s[cas-1].valeur=50;
	else if(nb4==5)
	tj->j[n-1].s[cas-1].valeur=50;
	else if(nb5==5)
	tj->j[n-1].s[cas-1].valeur=50;
	else if(nb6==5)
	tj->j[n-1].s[cas-1].valeur=50;
	else
	tj->j[n-1].s[cas-1].valeur=0;
	tj->j[n-1].s[cas-1].slct=1;
}
}

void Chance(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n)//15
{
	int cas = 16;
	if(tj->j[n-1].s[cas-1].slct==0)
	{
	tj->j[n-1].s[cas-1].valeur = tableau_de_des.d[0].v + tableau_de_des.d[1].v + tableau_de_des.d[2].v + tableau_de_des.d[3].v + tableau_de_des.d[4].v;
	printf("\ntj->j[n-1].s[cas-1].valeur = AHH %d \n", tj->j[n-1].s[cas-1].valeur);
	tj->j[n-1].s[cas-1].slct=1;
	}
}

void TotalII(tabbouton *tbouton,tabjoueur *tj,int n)
{
	int cas = 17;
	
	if(tj->joue==1)
	{
	tj->j[n-1].s[cas-1].valeur = 0;
	for(int i=9;i<16;i++)
	{
		tj->j[n-1].s[cas-1].valeur+=tj->j[n-1].s[i].valeur;
	}
	sprintf(tbouton->b[38+cas-1].nom, "%d", tj->j[n-1].s[cas-1].valeur);
	}
	
	else if(tj->joue==2)
	{
	tj->j[n-1].s[cas-1].valeur = 0;
	for(int i=9;i<16;i++)
	{
		tj->j[n-1].s[cas-1].valeur+=tj->j[n-1].s[i].valeur;
	}
	sprintf(tbouton->b[56+cas-1].nom, "%d", tj->j[n-1].s[cas-1].valeur);	
	}
	else if(tj->joue==3)
	{
	tj->j[n-1].s[cas-1].valeur = 0;
	for(int i=9;i<16;i++)
	{
		tj->j[n-1].s[cas-1].valeur+=tj->j[n-1].s[i].valeur;
	}
	sprintf(tbouton->b[74+cas-1].nom, "%d", tj->j[n-1].s[cas-1].valeur);	
	}
	else if(tj->joue==4)
	{
	tj->j[n-1].s[cas-1].valeur = 0;
	for(int i=9;i<16;i++)
	{
		tj->j[n-1].s[cas-1].valeur+=tj->j[n-1].s[i].valeur;
	}
	sprintf(tbouton->b[92+cas-1].nom, "%d", tj->j[n-1].s[cas-1].valeur);	
	}
	else if(tj->joue==5)
	{
	tj->j[n-1].s[cas-1].valeur = 0;
	for(int i=9;i<16;i++)
	{
		tj->j[n-1].s[cas-1].valeur+=tj->j[n-1].s[i].valeur;
	}
	sprintf(tbouton->b[110+cas-1].nom, "%d", tj->j[n-1].s[cas-1].valeur);	
	}
}
void Total(tabbouton *tbouton,tabjoueur *tj,int n)
{
	int cas = 18;
	if(tj->joue==1)
	{
	tj->j[n-1].s[cas-1].valeur = tj->j[n-1].s[16].valeur + tj->j[n-1].s[8].valeur;
	sprintf(tbouton->b[38+cas-1].nom, "%d", tj->j[n-1].s[cas-1].valeur);
	}
	else if(tj->joue==2)
	{
	tj->j[n-1].s[cas-1].valeur = tj->j[n-1].s[16].valeur + tj->j[n-1].s[8].valeur;
	sprintf(tbouton->b[56+cas-1].nom, "%d", tj->j[n-1].s[cas-1].valeur);
	}
	else if(tj->joue==3)
	{
	tj->j[n-1].s[cas-1].valeur = tj->j[n-1].s[16].valeur + tj->j[n-1].s[8].valeur;
	sprintf(tbouton->b[74+cas-1].nom, "%d", tj->j[n-1].s[cas-1].valeur);
	}
	else if(tj->joue==4)
	{
	tj->j[n-1].s[cas-1].valeur = tj->j[n-1].s[16].valeur + tj->j[n-1].s[8].valeur;
	sprintf(tbouton->b[92+cas-1].nom, "%d", tj->j[n-1].s[cas-1].valeur);
	}
	else if(tj->joue==5)
	{
	tj->j[n-1].s[cas-1].valeur = tj->j[n-1].s[16].valeur + tj->j[n-1].s[8].valeur;
	sprintf(tbouton->b[110+cas-1].nom, "%d", tj->j[n-1].s[cas-1].valeur);
	}
	tj->num_lancer=1;
}

void ChangeJoueur(tabjoueur *tj,int nbjoueurs)
{
	if(nbjoueurs==2)
	{
		if(tj->joue==1)
		{
		tj->joue++;
		}
		else if(tj->joue==2)
		{
		tj->joue=1;
		tj->tour++;
		}
	}
	else if(nbjoueurs==3)
	{
		if((tj->joue==1)||(tj->joue==2))
		{
		tj->joue++;
		}
		else if(tj->joue==3)
		{
		tj->joue=1;
		tj->tour++;
		}
	}
	else if(nbjoueurs==4)
	{
		if((tj->joue==1)||(tj->joue==2)||(tj->joue==3))
		{
		tj->joue++;
		}
		else if(tj->joue==4)
		{
		tj->joue=1;
		tj->tour++;
		}
	}
	else if(nbjoueurs==5)
	{
		if((tj->joue==1)||(tj->joue==2)||(tj->joue==3)||(tj->joue==4))
		{
		tj->joue++;
		}
		else if(tj->joue==5)
		{
		tj->joue=1;
		tj->tour++;
		}
	}
}
