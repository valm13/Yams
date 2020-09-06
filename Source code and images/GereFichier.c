#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GfxLib.h"
#include "Bouton.h"
#include "GereFichier.h"

tabbouton initialiseBouton() // Fonctionne
{
	tabbouton t;
	t.nbbts=132;
	int LargeurFenetre,HauteurFenetre;
	LargeurFenetre=800;
	HauteurFenetre=600;
	
	t.b[0].p1.x=LargeurFenetre*3/17;
	t.b[0].p1.y=HauteurFenetre*9/18;
	t.b[0].p2.x=LargeurFenetre*6/17;
	t.b[0].p2.y=HauteurFenetre*12/18;
	t.b[0].crect.red=0;
	t.b[0].crect.green=80;
	t.b[0].crect.blue=255;
	t.b[0].txt.x=LargeurFenetre*7/34;
	t.b[0].txt.y=HauteurFenetre*41/72;
	t.b[0].ctexte.red=0;
	t.b[0].ctexte.green=0;
	t.b[0].ctexte.blue=0;
	t.b[0].police=24;
	
	t.b[1].p1.x=LargeurFenetre*11/17;
	t.b[1].p1.y=HauteurFenetre*9/18;
	t.b[1].p2.x=LargeurFenetre*14/17;
	t.b[1].p2.y=HauteurFenetre*12/18;
	t.b[1].crect.red=0;
	t.b[1].crect.green=80;
	t.b[1].crect.blue=255;
	t.b[1].txt.x=LargeurFenetre*23/34;
	t.b[1].txt.y=HauteurFenetre*41/72;
	t.b[1].ctexte.red=0;
	t.b[1].ctexte.green=0;
	t.b[1].ctexte.blue=0;
	t.b[1].police=24;
	
	t.b[2].p1.x=LargeurFenetre*7/17; //Bouton OK Menu Principal
	t.b[2].p1.y=HauteurFenetre*2/18;
	t.b[2].p2.x=LargeurFenetre*10/17;
	t.b[2].p2.y=HauteurFenetre*4/18;
	t.b[2].crect.red=0;
	t.b[2].crect.green=255;
	t.b[2].crect.blue=80;
	t.b[2].txt.x=LargeurFenetre*8/17;
	t.b[2].txt.y=HauteurFenetre*11/72;
	t.b[2].ctexte.red=0;
	t.b[2].ctexte.green=0;
	t.b[2].ctexte.blue=0;
	t.b[2].police=24;
	
	t.b[3].p1.x=0; //Texte : Menu Principal je l'affiche comme un bouton blanc
	t.b[3].p1.y=0;
	t.b[3].p2.x=0;
	t.b[3].p2.y=0;
	t.b[3].crect.red=255;
	t.b[3].crect.green=255;
	t.b[3].crect.blue=255;
	t.b[3].txt.x=LargeurFenetre*13/34;
	t.b[3].txt.y=HauteurFenetre*15/18;
	t.b[3].ctexte.red=80;
	t.b[3].ctexte.green=0;
	t.b[3].ctexte.blue=255;
	t.b[3].police=24;
	
	t.b[4].p1.x=LargeurFenetre*4/17; // 2J
	t.b[4].p1.y=HauteurFenetre*9/18;
	t.b[4].p2.x=LargeurFenetre*7/17;
	t.b[4].p2.y=HauteurFenetre*12/18;
	t.b[4].crect.red=0;
	t.b[4].crect.green=80;
	t.b[4].crect.blue=255;
	t.b[4].txt.x=LargeurFenetre*33/136;
	t.b[4].txt.y=HauteurFenetre*41/72;
	t.b[4].ctexte.red=0;
	t.b[4].ctexte.green=0;
	t.b[4].ctexte.blue=0;
	t.b[4].police=24;
	
	t.b[5].p1.x=LargeurFenetre*10/17; // 3J
	t.b[5].p1.y=HauteurFenetre*9/18;
	t.b[5].p2.x=LargeurFenetre*13/17;
	t.b[5].p2.y=HauteurFenetre*12/18;
	t.b[5].crect.red=0;
	t.b[5].crect.green=80;
	t.b[5].crect.blue=255;
	t.b[5].txt.x=LargeurFenetre*81/136;
	t.b[5].txt.y=HauteurFenetre*41/72;
	t.b[5].ctexte.red=0;
	t.b[5].ctexte.green=0;
	t.b[5].ctexte.blue=0;
	t.b[5].police=24;
	
	t.b[6].p1.x=LargeurFenetre*4/17; // 4J
	t.b[6].p1.y=HauteurFenetre*5/18;
	t.b[6].p2.x=LargeurFenetre*7/17;
	t.b[6].p2.y=HauteurFenetre*8/18;
	t.b[6].crect.red=0;
	t.b[6].crect.green=80;
	t.b[6].crect.blue=255;
	t.b[6].txt.x=LargeurFenetre*33/136;
	t.b[6].txt.y=HauteurFenetre*25/72;
	t.b[6].ctexte.red=0;
	t.b[6].ctexte.green=0;
	t.b[6].ctexte.blue=0;
	t.b[6].police=24;
	
	t.b[7].p1.x=LargeurFenetre*10/17; // 5J
	t.b[7].p1.y=HauteurFenetre*5/18;
	t.b[7].p2.x=LargeurFenetre*13/17;
	t.b[7].p2.y=HauteurFenetre*8/18;
	t.b[7].crect.red=0;
	t.b[7].crect.green=80;
	t.b[7].crect.blue=255;
	t.b[7].txt.x=LargeurFenetre*81/136;
	t.b[7].txt.y=HauteurFenetre*25/72;
	t.b[7].ctexte.red=0;
	t.b[7].ctexte.green=0;
	t.b[7].ctexte.blue=0;
	t.b[7].police=24;

	t.b[8].p1.x=LargeurFenetre*7/17; //Bouton OK Menu joueur
	t.b[8].p1.y=HauteurFenetre*2/18;
	t.b[8].p2.x=LargeurFenetre*10/17;
	t.b[8].p2.y=HauteurFenetre*4/18;
	t.b[8].crect.red=0;
	t.b[8].crect.green=255;
	t.b[8].crect.blue=80;
	t.b[8].txt.x=LargeurFenetre*8/17;
	t.b[8].txt.y=HauteurFenetre*11/72;
	t.b[8].ctexte.red=0;
	t.b[8].ctexte.green=0;
	t.b[8].ctexte.blue=0;
	t.b[8].police=24;
	
	t.b[9].p1.x=0; //Texte : Nombre de joueurs je l'affiche comme un bouton blanc
	t.b[9].p1.y=0;
	t.b[9].p2.x=0;
	t.b[9].p2.y=0;
	t.b[9].crect.red=255;
	t.b[9].crect.green=255;
	t.b[9].crect.blue=255;
	t.b[9].txt.x=LargeurFenetre*13/34;
	t.b[9].txt.y=HauteurFenetre*15/18;
	t.b[9].ctexte.red=80;
	t.b[9].ctexte.green=0;
	t.b[9].ctexte.blue=255;
	t.b[9].police=24;

	t.b[10].p1.x=0; //Texte : Langues je l'affiche comme un bouton blanc
	t.b[10].p1.y=0;
	t.b[10].p2.x=0;
	t.b[10].p2.y=0;
	t.b[10].crect.red=255;
	t.b[10].crect.green=255;
	t.b[10].crect.blue=255;
	t.b[10].txt.x=LargeurFenetre*15/34;
	t.b[10].txt.y=HauteurFenetre*15/18;
	t.b[10].ctexte.red=80;
	t.b[10].ctexte.green=0;
	t.b[10].ctexte.blue=255;
	t.b[10].police=24;

	t.b[11].p1.x=LargeurFenetre*7/17; //Bouton OK Menu joueur
	t.b[11].p1.y=HauteurFenetre*2/18;
	t.b[11].p2.x=LargeurFenetre*10/17;
	t.b[11].p2.y=HauteurFenetre*4/18;
	t.b[11].crect.red=0;
	t.b[11].crect.green=255;
	t.b[11].crect.blue=80;
	t.b[11].txt.x=LargeurFenetre*8/17;
	t.b[11].txt.y=HauteurFenetre*11/72;
	t.b[11].ctexte.red=0;
	t.b[11].ctexte.green=0;
	t.b[11].ctexte.blue=0;
	t.b[11].police=24;
	
	t.b[12].p1.x=LargeurFenetre*15/25; //Bouton Relance des dés
	t.b[12].p1.y=HauteurFenetre*12/19;
	t.b[12].p2.x=LargeurFenetre*19/25;
	t.b[12].p2.y=HauteurFenetre*14/19;
	t.b[12].crect.red=255;
	t.b[12].crect.green=0;
	t.b[12].crect.blue=80;
	t.b[12].txt.x=LargeurFenetre*31/50;
	t.b[12].txt.y=HauteurFenetre*25/38+7;
	t.b[12].ctexte.red=0;
	t.b[12].ctexte.green=0;
	t.b[12].ctexte.blue=0;
	t.b[12].police=24;
	
	t.b[13].p1.x=LargeurFenetre*18/25; //Bouton de Menu
	t.b[13].p1.y=HauteurFenetre*1/19;
	t.b[13].p2.x=LargeurFenetre*24/25;
	t.b[13].p2.y=HauteurFenetre*3/19;
	t.b[13].crect.red=255;
	t.b[13].crect.green=0;
	t.b[13].crect.blue=80;
	t.b[13].txt.x=LargeurFenetre*37/50;
	t.b[13].txt.y=HauteurFenetre*4/38-7;
	t.b[13].ctexte.red=0;
	t.b[13].ctexte.green=0;
	t.b[13].ctexte.blue=0;
	t.b[13].police=24;
	
	for(int i=0;i<19;i++) //19 boutons de Texte de la grille (non cliquable)
	{
	t.b[i+14].p1.x=0;
	t.b[i+14].p1.y=HauteurFenetre*(19-i)/19;
	t.b[i+14].p2.x=LargeurFenetre*3/25;
	t.b[i+14].p2.y=HauteurFenetre*(18-i)/19;
	//~ t.b[i+14].crect.red=84;
	//~ t.b[i+14].crect.green=114;
	//~ t.b[i+14].crect.blue=174;
	t.b[i+14].crect.red=54+2*i;
	t.b[i+14].crect.green=84+2*i;
	t.b[i+14].crect.blue=144+2*i;
	t.b[i+14].txt.x=5; 
	t.b[i+14].txt.y=HauteurFenetre*(37-2*i)/38;
	t.b[i+14].ctexte.red=0;
	t.b[i+14].ctexte.green=0;
	t.b[i+14].ctexte.blue=0;
	t.b[i+14].police=12;
	}


	for(int i=0;i<5;i++)  // J1 J2 J3 J4 J5
	{
	t.b[i+33].p1.x=LargeurFenetre*(3+2*i)/25;
	t.b[i+33].p1.y=HauteurFenetre;
	t.b[i+33].p2.x=LargeurFenetre*(5+2*i)/25;
	t.b[i+33].p2.y=HauteurFenetre*18/19;
	t.b[i+33].crect.red=104+10*i;
	t.b[i+33].crect.green=34+10*i;
	t.b[i+33].crect.blue=139+10*i;
	t.b[i+33].txt.x=LargeurFenetre*(4+2*i)/25-5;;
	t.b[i+33].txt.y=HauteurFenetre*37/38;
	t.b[i+33].ctexte.red=0;
	t.b[i+33].ctexte.green=0;
	t.b[i+33].ctexte.blue=0;
	t.b[i+33].police=12;
	}
	
	
	for(int i=0;i<18;i++) //18 boutons de J1 Cliquable
	{
	t.b[i+38].p1.x=LargeurFenetre*3/25;
	t.b[i+38].p1.y=HauteurFenetre*(18-i)/19;
	t.b[i+38].p2.x=LargeurFenetre*5/25;
	t.b[i+38].p2.y=HauteurFenetre*(17-i)/19;
	t.b[i+38].crect.red=255;
	t.b[i+38].crect.green=255;
	t.b[i+38].crect.blue=255;
	t.b[i+38].txt.x=LargeurFenetre*4/25;;
	t.b[i+38].txt.y=HauteurFenetre*(35-2*i)/38;
	t.b[i+38].ctexte.red=0;
	t.b[i+38].ctexte.green=0;
	t.b[i+38].ctexte.blue=0;
	t.b[i+38].police=12;
	}
	
	for(int i=0;i<18;i++) //18 boutons de J2 Cliquable
	{
	t.b[i+56].p1.x=LargeurFenetre*5/25;
	t.b[i+56].p1.y=HauteurFenetre*(18-i)/19;
	t.b[i+56].p2.x=LargeurFenetre*7/25;
	t.b[i+56].p2.y=HauteurFenetre*(17-i)/19;
	t.b[i+56].crect.red=255;
	t.b[i+56].crect.green=255;
	t.b[i+56].crect.blue=255;
	t.b[i+56].txt.x=LargeurFenetre*6/25;;
	t.b[i+56].txt.y=HauteurFenetre*(35-2*i)/38;
	t.b[i+56].ctexte.red=0;
	t.b[i+56].ctexte.green=0;
	t.b[i+56].ctexte.blue=0;
	t.b[i+56].police=12;
	}
	
	for(int i=0;i<18;i++) //18 boutons de J3 Cliquable
	{
	t.b[i+74].p1.x=LargeurFenetre*7/25;
	t.b[i+74].p1.y=HauteurFenetre*(18-i)/19;
	t.b[i+74].p2.x=LargeurFenetre*9/25;
	t.b[i+74].p2.y=HauteurFenetre*(17-i)/19;
	t.b[i+74].crect.red=255;
	t.b[i+74].crect.green=255;
	t.b[i+74].crect.blue=255;
	t.b[i+74].txt.x=LargeurFenetre*8/25;;
	t.b[i+74].txt.y=HauteurFenetre*(35-2*i)/38;
	t.b[i+74].ctexte.red=0;
	t.b[i+74].ctexte.green=0;
	t.b[i+74].ctexte.blue=0;
	t.b[i+74].police=12;
	}
	
	for(int i=0;i<18;i++) //18 boutons de J4 Cliquable
	{
	t.b[i+92].p1.x=LargeurFenetre*9/25;
	t.b[i+92].p1.y=HauteurFenetre*(18-i)/19;
	t.b[i+92].p2.x=LargeurFenetre*11/25;
	t.b[i+92].p2.y=HauteurFenetre*(17-i)/19;
	t.b[i+92].crect.red=255;
	t.b[i+92].crect.green=255;
	t.b[i+92].crect.blue=255;
	t.b[i+92].txt.x=LargeurFenetre*10/25;;
	t.b[i+92].txt.y=HauteurFenetre*(35-2*i)/38;
	t.b[i+92].ctexte.red=0;
	t.b[i+92].ctexte.green=0;
	t.b[i+92].ctexte.blue=0;
	t.b[i+92].police=12;
	}
	
	for(int i=0;i<18;i++) //18 boutons de J5 Cliquable
	{
	t.b[i+110].p1.x=LargeurFenetre*11/25;
	t.b[i+110].p1.y=HauteurFenetre*(18-i)/19;
	t.b[i+110].p2.x=LargeurFenetre*13/25;
	t.b[i+110].p2.y=HauteurFenetre*(17-i)/19;
	t.b[i+110].crect.red=255;
	t.b[i+110].crect.green=255;
	t.b[i+110].crect.blue=255;
	t.b[i+110].txt.x=LargeurFenetre*12/25;;
	t.b[i+110].txt.y=HauteurFenetre*(35-2*i)/38;
	t.b[i+110].ctexte.red=0;
	t.b[i+110].ctexte.green=0;
	t.b[i+110].ctexte.blue=0;
	t.b[i+110].police=12;
	}
	
	t.b[128].p1.x=LargeurFenetre*7/17; // Bouton sauvegarde sur le menu
	t.b[128].p1.y=HauteurFenetre*9/18;
	t.b[128].p2.x=LargeurFenetre*10/17;
	t.b[128].p2.y=HauteurFenetre*12/18;
	t.b[128].crect.red=0;
	t.b[128].crect.green=80;
	t.b[128].crect.blue=255;
	t.b[128].txt.x=LargeurFenetre*14/34+5;
	t.b[128].txt.y=HauteurFenetre*41/72;
	t.b[128].ctexte.red=0;
	t.b[128].ctexte.green=0;
	t.b[128].ctexte.blue=0;
	t.b[128].police=24;
	
	t.b[129].p1.x=LargeurFenetre*2/18; // Bouton charger du menu de sauvegarde
	t.b[129].p1.y=HauteurFenetre*5/11;
	t.b[129].p2.x=LargeurFenetre*8/18;
	t.b[129].p2.y=HauteurFenetre*7/11;
	t.b[129].crect.red=0;
	t.b[129].crect.green=80;
	t.b[129].crect.blue=255;
	t.b[129].txt.x=LargeurFenetre*7/36;
	t.b[129].txt.y=HauteurFenetre*6/11;
	t.b[129].ctexte.red=0;
	t.b[129].ctexte.green=0;
	t.b[129].ctexte.blue=0;
	t.b[129].police=24;
	
	t.b[130].p1.x=LargeurFenetre*10/18; // Bouton sauver du menu de sauvegarde
	t.b[130].p1.y=HauteurFenetre*5/11;
	t.b[130].p2.x=LargeurFenetre*16/18;
	t.b[130].p2.y=HauteurFenetre*7/11;
	t.b[130].crect.red=0;
	t.b[130].crect.green=80;
	t.b[130].crect.blue=255;
	t.b[130].txt.x=LargeurFenetre*21/36;
	t.b[130].txt.y=HauteurFenetre*6/11;
	t.b[130].ctexte.red=0;
	t.b[130].ctexte.green=0;
	t.b[130].ctexte.blue=0;
	t.b[130].police=24;
	
	t.b[131].p1.x=0; // Bouton de texte du menu de sauvegarde
	t.b[131].p1.y=0;
	t.b[131].p2.x=0;
	t.b[131].p2.y=0;
	t.b[131].crect.red=255;
	t.b[131].crect.green=255;
	t.b[131].crect.blue=255;
	t.b[131].txt.x=LargeurFenetre*6/18+5;
	t.b[131].txt.y=HauteurFenetre*19/22;
	t.b[131].ctexte.red=0;
	t.b[131].ctexte.green=0;
	t.b[131].ctexte.blue=0;
	t.b[131].police=24;
	
	return t;
}
void sauveDescriptionBouton(tabbouton t,chaine nomFichier) // Fonctionne
{
	FILE *f;
	f=fopen(nomFichier,"wb"); // attribus a pour ecrire à la suite
	
	fwrite(&(t.nbbts),sizeof(int),1,f);
	for(int i=0;i<t.nbbts;i++)
	{
	fwrite(&(t.b[i].p1.x),sizeof(int),1,f);
	fwrite(&(t.b[i].p1.y),sizeof(int),1,f);
	fwrite(&(t.b[i].p2.x),sizeof(int),1,f);
	fwrite(&(t.b[i].p2.y),sizeof(int),1,f);
	
	fwrite(&(t.b[i].crect.red),sizeof(int),1,f);
	fwrite(&(t.b[i].crect.green),sizeof(int),1,f);
	fwrite(&(t.b[i].crect.blue),sizeof(int),1,f);

	fwrite(&(t.b[i].txt.x),sizeof(int),1,f);
	fwrite(&(t.b[i].txt.y),sizeof(int),1,f);
	
	fwrite(&(t.b[i].ctexte.red),sizeof(int),1,f);
	fwrite(&(t.b[i].ctexte.green),sizeof(int),1,f);
	fwrite(&(t.b[i].ctexte.blue),sizeof(int),1,f);

	fwrite(&(t.b[i].police),sizeof(int),1,f);
	}
	fclose(f);
}
tabbouton lisDescriptionBouton(chaine nomFichier) // Fonctionne
{
	tabbouton t;
	FILE *f;
	f=fopen(nomFichier,"rb");
	fread(&(t.nbbts),sizeof(int),1,f);
	for(int i=0;i<t.nbbts;i++)
	{
	fread(&(t.b[i].p1.x),sizeof(int),1,f);
	fread(&(t.b[i].p1.y),sizeof(int),1,f);
	fread(&(t.b[i].p2.x),sizeof(int),1,f);
	fread(&(t.b[i].p2.y),sizeof(int),1,f);
	
	fread(&(t.b[i].crect.red),sizeof(int),1,f);
	fread(&(t.b[i].crect.green),sizeof(int),1,f);
	fread(&(t.b[i].crect.blue),sizeof(int),1,f);

	fread(&(t.b[i].txt.x),sizeof(int),1,f);
	fread(&(t.b[i].txt.y),sizeof(int),1,f);
	
	fread(&(t.b[i].ctexte.red),sizeof(int),1,f);
	fread(&(t.b[i].ctexte.green),sizeof(int),1,f);
	fread(&(t.b[i].ctexte.blue),sizeof(int),1,f);

	fread(&(t.b[i].police),sizeof(int),1,f);
	}
	fclose(f);
	return t;
}

void sauveTexteBouton()
{
	FILE *f;
	
	f=fopen("FR","wt");
	fprintf(f,"Langues\n");
	fprintf(f,"Joueurs\n");
	fprintf(f,"Ok\n");
	fprintf(f,"Menu_Principal\n");
	fprintf(f,"2_Joueurs\n");
	fprintf(f,"3_Joueurs\n");
	fprintf(f,"4_Joueurs\n");
	fprintf(f,"5_Joueurs\n");
	fprintf(f,"Ok\n");
	fprintf(f,"Nombre_de_joueurs\n");
	fprintf(f,"Langue\n");
	fprintf(f,"Ok\n");
	fprintf(f,"Relancer\n");
	fprintf(f,"Menu\n");
	fprintf(f,"Joueurs\n");
	fprintf(f,"Total_de_1\n");
	fprintf(f,"Total_de_2\n");
	fprintf(f,"Total_de_3\n");
	fprintf(f,"Total_de_4\n");
	fprintf(f,"Total_de_5\n");
	fprintf(f,"Total_de_6\n");
	fprintf(f,"Total\n");
	fprintf(f,"Bonus\n");
	fprintf(f,"Total_I\n");
	fprintf(f,"Brelan\n");
	fprintf(f,"Carre\n");
	fprintf(f,"Full\n");
	fprintf(f,"Petite_Suite\n");
	fprintf(f,"Grande_Suite\n");
	fprintf(f,"Yam's\n");
	fprintf(f,"Chance\n");
	fprintf(f,"Total_II\n");
	fprintf(f,"TOTAL\n");
	fprintf(f,"J1\n");
	fprintf(f,"J2\n");
	fprintf(f,"J3\n");
	fprintf(f,"J4\n");
	fprintf(f,"J5\n");
	for(int i=38;i<128;i++)
	{
	fprintf(f,".\n");
	}
	fprintf(f,"Sauvegarde\n");
	fprintf(f,"Charger_Partie\n");
	fprintf(f,"Sauver_Partie\n");
	fprintf(f,"Menu_Sauvegarde\n");

	fclose(f);
	
	f=fopen("EN","wt");
	fprintf(f,"Langage\n");
	fprintf(f,"Players\n");
	fprintf(f,"Ok\n");
	fprintf(f,"Main_Menu\n");
	fprintf(f,"2_Players\n");
	fprintf(f,"3_Players\n");
	fprintf(f,"4_Players\n");
	fprintf(f,"5_Players\n");
	fprintf(f,"Ok\n");
	fprintf(f,"Number_of_players\n");
	fprintf(f,"Langage\n");
	fprintf(f,"Ok\n");
	fprintf(f,"Roll_dice\n");
	fprintf(f,"Menu\n");
	fprintf(f,"Players\n");
	fprintf(f,"Aces\n");
	fprintf(f,"Twos\n");
	fprintf(f,"Threes\n");
	fprintf(f,"Fours\n");
	fprintf(f,"Fives\n");
	fprintf(f,"Sixes\n");
	fprintf(f,"Total\n");
	fprintf(f,"Bonus\n");
	fprintf(f,"Total_I\n");
	fprintf(f,"3_of_a_kind\n");
	fprintf(f,"4_of_a_kind\n");
	fprintf(f,"Full_House\n");
	fprintf(f,"Small_Straight\n");
	fprintf(f,"Long_Straight\n");
	fprintf(f,"Yam's\n");
	fprintf(f,"Chance\n");
	fprintf(f,"Total_II\n");
	fprintf(f,"TOTAL\n");
	fprintf(f,"P1\n");
	fprintf(f,"P2\n");
	fprintf(f,"P3\n");
	fprintf(f,"P4\n");
	fprintf(f,"P5\n");
	for(int i=38;i<128;i++)
	{
	fprintf(f,".\n");
	}
	fprintf(f,"Backup\n");
	fprintf(f,"Load_Party\n");
	fprintf(f,"Save_Partie\n");
	fprintf(f,"Menu__For_Save\n");
	fclose(f);
	
	f=fopen("DE","wt");
	fprintf(f,"Sprache\n");
	fprintf(f,"Spieler\n");
	fprintf(f,"Ok\n");
	fprintf(f,"Hauptmenu\n");
	fprintf(f,"2_Spieler\n");
	fprintf(f,"3_Spieler\n");
	fprintf(f,"4_Spieler\n");
	fprintf(f,"5_Spieler\n");
	fprintf(f,"Ok\n");
	fprintf(f,"Zahl_Der_Spieler\n");
	fprintf(f,"Sprache\n");
	fprintf(f,"Ok\n");
	fprintf(f,"Wurfeln\n");
	fprintf(f,"Hauptmenu\n");
	fprintf(f,"Spielers\n");
	fprintf(f,"Eins\n");
	fprintf(f,"Zwei\n");
	fprintf(f,"Drei\n");
	fprintf(f,"Vier\n");
	fprintf(f,"Funf\n");
	fprintf(f,"Sechs\n");
	fprintf(f,"Total\n");
	fprintf(f,"Bonus\n");
	fprintf(f,"Total_I\n");
	fprintf(f,"3_Ahnlich\n");
	fprintf(f,"4_Ahnlich\n");
	fprintf(f,"3&2_Ahnlich\n");
	fprintf(f,"Klein_Folgende\n");
	fprintf(f,"Weit_Folgende\n");
	fprintf(f,"Yam's\n");
	fprintf(f,"Gluck\n");
	fprintf(f,"Total_II\n");
	fprintf(f,"TOTAL\n");
	fprintf(f,"S1\n");
	fprintf(f,"S2\n");
	fprintf(f,"S3\n");
	fprintf(f,"S4\n");
	fprintf(f,"S5\n");
	for(int i=38;i<128;i++)
	{
	fprintf(f,".\n");
	}
	fprintf(f,"Sichern\n");
	fprintf(f,"Belastung_Spiel\n");
	fprintf(f,"Speichern_Spiel\n");
	fclose(f);

}

void lisTexteBouton(tabbouton *t,int lg)
{
	FILE *f;
	if(lg == 1)
	{
		f=fopen("FR","rt");
		for(int i=0;i<t->nbbts;i++)
		{
		fscanf(f,"%s\n",t->b[i].nom);
		}
		fclose(f);
	}
	else if(lg == 2)
	{
		f=fopen("EN","rt");
		for(int i=0;i<t->nbbts;i++)
		{
		fscanf(f,"%s\n",t->b[i].nom);
		}
		fclose(f);
	}
	else if(lg == 3)
	{
		f=fopen("DE","rt");
		for(int i=0;i<t->nbbts;i++)
		{
		fscanf(f,"%s\n",t->b[i].nom);
		}
		fclose(f);
	}
	else
	lg =1;

}
