typedef struct de
{
	int v;				// Valeur du dé
	int slct; 			// 0:Le dé n'est pas selectionné -->  On ne le relance pas le dé 		1:Le dé est selectionné --> Relance du dé   
}de;

typedef struct tbde
{
	de d[5];	    // Tableau de 5 dés
}tbde;
/****************************************************
 Nom : InitialiseDe
 Description : Initialise le tableau de dés
 Valeur retournée : tbde
 Paramètre en entrée : tbde tabde
 Paramètre en entrée / sortie :
 Paramètres en sortie : tbde
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
tbde InitialiseDe(tbde tabde); // Initialise le tableau de dé
/****************************************************
 Nom : RegenDe
 Description : Re-Génére les dés
 Valeur retournée : void
 Paramètre en entrée :
 Paramètre en entrée / sortie : tbde *tabde
 Paramètres en sortie :
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void RegenDe(tbde *tabde); // Re-Genere les dés sélectionnés
/****************************************************
 Nom : RelanceDes
 Description : Relance les dés quand un joueur rentre un score sur la feuille
 Valeur retournée : void
 Paramètre en entrée :
 Paramètre en entrée / sortie : tbde *tabde
 Paramètres en sortie :
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void RelanceDes(tbde *tabde);
