/****************************************************
 Nom : gereClicMenu
 Description : Gere les clics du joueur sur le menu
 Valeur retournée : void
 Paramètre en entrée : tabbouton t chaine save
 Paramètre en entrée / sortie : int *menu,int *mlangues,int *mjoueurs,int *msave,int *nbjoueurs,int *lg,tabbouton *T,tabjoueur *tj
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void gereClicMenu(int *menu,int *mlangues,int *mjoueurs,int *msave,int *nbjoueurs,int *lg,tabbouton t,tabbouton *T,tabjoueur *tj);
/****************************************************
 Nom : gereClicJeu
 Description : Gere les clics du joueur sur le boutons de jeu
 Valeur retournée : void
 Paramètre en entrée : 
 Paramètre en entrée / sortie : int *menu,int *lg,tabbouton *t,tbde *tableaudedes,tabjoueur *tj
 Paramètres en sortie :
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void gereClicJeu(int *menu,int *lg,tabbouton *t,tbde *tableaudedes,tabjoueur *tj);
/****************************************************
 Nom : gereClicScore
 Description : Gere les clics du joueur sur la feuille de score
 Valeur retournée : void
 Paramètre en entrée : int nbjoueurs
 Paramètre en entrée / sortie : tabbouton *tbouton,tabjoueur *tjoueur,tbde *tableaudedes
 Paramètres en sortie :
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void gereClicScore(tabbouton *tbouton,tabjoueur *tjoueur,tbde *tableaudedes,int nbjoueurs);
/****************************************************
 Nom : changeLangue
 Description : Change la langue des textes
 Valeur retournée : void
 Paramètre en entrée : 
 Paramètre en entrée / sortie : int *lg,tabbouton *t
 Paramètres en sortie :
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void changeLangue(int *lg,tabbouton *t);
/****************************************************
 Nom : FinClicScore
 Description : S'occupe de l'actualisation des scores et du changement du joueur aprés un clic sur une case du tableau de score
 Valeur retournée : void
 Paramètre en entrée : int n,int nbjoueurs
 Paramètre en entrée / sortie : tabbouton *tb,tabjoueur *tj,tbde *tableaudedes
 Paramètres en sortie :
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void FinClicScore(tabbouton *tb,tabjoueur *tj,tbde *tableaudedes,int n,int nbjoueurs);

void Charger(tabjoueur *tj,int *nbjoueur,tabbouton *tbouton);
void Sauver(tabjoueur *tj,int *nbjoueur,tabbouton *tbouton);
