typedef char chaine[20];

/****************************************************
 Nom : InitialiseDe
 Description : Initialise un tableau de boutons
 Valeur retournée : tabbouton
 Paramètre en entrée : 
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
tabbouton initialiseBouton();
/****************************************************
 Nom : sauveDescriptionBouton
 Description : Sauvegarde les paramètres des boutons dans un fichier binaire
 Valeur retournée : void
 Paramètre en entrée : tabbouton t,chaine nomFichier
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void sauveDescriptionBouton(tabbouton t,chaine nomFichier);
/****************************************************
 Nom : lisDescriptionBouton
 Description : Charge les paramètres des boutons à partir d'un fichier binaire
 Valeur retournée : tabbouton
 Paramètre en entrée : chaine nomFichier
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
tabbouton lisDescriptionBouton(chaine nomFichier);
/****************************************************
 Nom : sauveTexteBouton
 Description : Sauvegarde le texte des futures boutons dans des fichiers de langue
 Valeur retournée : void
 Paramètre en entrée : 
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void sauveTexteBouton();
/****************************************************
 Nom : lisTexteBouton
 Description : Change le texte des boutons en fonction de la langue
 Valeur retournée : void
 Paramètre en entrée : int lg
 Paramètre en entrée / sortie : tabbouton *t
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void lisTexteBouton(tabbouton *t,int lg);
