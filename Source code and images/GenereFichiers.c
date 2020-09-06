#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GfxLib.h"
#include "Bouton.h"
#include "GereFichier.h"

int main(int argc, char **argv)
{
	tabbouton t;
	chaine nom;
	strcpy(nom,"Description");
	t=initialiseBouton();
	sauveDescriptionBouton(t,nom);
	//p=lisDescriptionBouton(nom);
	sauveTexteBouton();
	return 0;
}

