/****************************************************
 Nom : Quadrillage
 Description : Quadrille la grille de score en fonction du nombre de joueurs
 Valeur retournée : void
 Paramètre en entrée : int nbjoueur
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void Quadrillage(int nbjoueur);
/****************************************************
 Nom : afficheInfoGrille
 Description : Affiche les informations relatives aux informations du tableau de score (Total de 1, 2...)
 Valeur retournée : void
 Paramètre en entrée : tabbouton t,int nbjoueur
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void afficheInfoGrille(tabbouton t,int nbjoueur);
/****************************************************
 Nom : Menu
 Description : Affiche le menu principal
 Valeur retournée : void
 Paramètre en entrée : tabbouton t
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void Menu(tabbouton t);
/****************************************************
 Nom : MenuJoueurs
 Description : Affiche le menu de gestion de joueurs
 Valeur retournée : void
 Paramètre en entrée : tabbouton t
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void MenuJoueurs(tabbouton t);
/****************************************************
 Nom : MenuLangue
 Description : Affiche le menu de gestion de la langue
 Valeur retournée : void
 Paramètre en entrée : tabbouton t
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void MenuLangue(tabbouton t);
/****************************************************
 Nom : afficheDes
 Description : Affiche les dés
 Valeur retournée : void
 Paramètre en entrée : tbde t
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void afficheDes(tbde t);
/****************************************************
 Nom : afficheBaniere
 Description : Affiche la bannière
 Valeur retournée : void
 Paramètre en entrée :
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void afficheBaniere();
/****************************************************
 Nom : afficheBoutonjeu
 Description : Affiche les boutons de jeu
 Valeur retournée : void
 Paramètre en entrée : tabbouton t
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void afficheBoutonjeu(tabbouton t);
/****************************************************
 Nom : afficheLangue
 Description : Affiche le bouton de langue en fonction de la langue actuelle
 Valeur retournée : void
 Paramètre en entrée : int lg
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void afficheLangue(int lg);
/****************************************************
 Nom : afficheScore
 Description : Affiche les scores des joueurs
 Valeur retournée : void
 Paramètre en entrée : tabbouton t,int nbjoueurs
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void afficheScore(tabbouton t,int nbjoueurs);
/****************************************************
 Nom : afficheJoueur
 Description : Affiche le tour du joueur X
 Valeur retournée : void
 Paramètre en entrée : tabjoueur t,int lg
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void afficheJoueur(tabjoueur t,int lg);
/****************************************************
 Nom : afficheTour
 Description : Affiche les tour actuel en fonction de la langue
 Valeur retournée : void
 Paramètre en entrée : tabbouton t,int lg
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void afficheTour(tabjoueur t,int lg);
/****************************************************
 Nom : afficheLancer
 Description : Affiche le lancer actuel en fonction de la langue
 Valeur retournée : void
 Paramètre en entrée : tabbouton t,int lg
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void afficheLancer(tabjoueur t,int lg);
/****************************************************
 Nom : MenuSauvegarde
 Description : Affiche le menu de sauvegarde
 Valeur retournée : void
 Paramètre en entrée : tabbouton t
 Paramètre en entrée / sortie :
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void MenuSauvegarde(tabbouton t);
