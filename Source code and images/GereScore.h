typedef struct score{
	int valeur;
	int slct;
}score;

typedef struct joueur{
	score s[18];
}joueur;

typedef struct tabjoueur{
	joueur j[5];
	int tour;
	int num_lancer;
	int joue;
}tabjoueur;

/****************************************************
 Nom : initialiseTabJoueur
 Description : Initialise le tableau de joueur
 Valeur retournée : void
 Paramètre en entrée : 
 Paramètre en entrée / sortie : tabjoueur *j
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void initialiseTabJoueur(tabjoueur *j);
/****************************************************
 Nom : lesUns,lesDeux,lesTrois,lesQuatres,lesCinqs,lesSix
 Description : Calcul le total 1,2,3,4,5,6
 Valeur retournée : void
 Paramètre en entrée : tbde tableau_de_des,int n  n:le joureur Jn
 Paramètre en entrée / sortie : tabjoueur *tj
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void lesUns(tbde tableau_de_des,tabjoueur *tj,int n);
void lesDeux(tbde tableau_de_des,tabjoueur *tj,int n);
void lesTrois(tbde tableau_de_des,tabjoueur *tj,int n);
void lesQuatres(tbde tableau_de_des,tabjoueur *tj,int n);
void lesCinqs(tbde tableau_de_des,tabjoueur *tj,int n);
void lesSix(tbde tableau_de_des,tabjoueur *tj,int n);
/****************************************************
 Nom : SousTotal
 Description : Calcul le sous total
 Valeur retournée : void
 Paramètre en entrée : tbde tableau_de_des,int n
 Paramètre en entrée / sortie : tabjoueur *tj
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void SousTotal(tabbouton *tbouton,tabjoueur *tj,int n);
/****************************************************
 Nom : Bonus
 Description : Calcul le bonus
 Valeur retournée : void
 Paramètre en entrée : tbde tableau_de_des,int n
 Paramètre en entrée / sortie : tabjoueur *tj
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void Bonus(tabbouton *tbouton,tabjoueur *tj,int n);
/****************************************************
 Nom : TotalI
 Description : Calcul le total I
 Valeur retournée : void
 Paramètre en entrée : tbde tableau_de_des,int n
 Paramètre en entrée / sortie : tabjoueur *tj
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void TotalI(tabbouton *tbouton,tabjoueur *tj,int n);

/****************************************************
 Nom : Brelan
 Description : Calcul le Brelan
 Valeur retournée : void
 Paramètre en entrée : tbde tableau_de_des,int n
 Paramètre en entrée / sortie : tabjoueur *tj
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void Brelan(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n);
/****************************************************
 Nom : Carre
 Description : Calcul le Carré
 Valeur retournée : void
 Paramètre en entrée : tbde tableau_de_des,int n
 Paramètre en entrée / sortie : tabjoueur *tj
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void Carre(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n);

/****************************************************
 Nom : BrelanFull,DeuxlanFull
 Description : Calcul a et b qui sont respectivement les valeurs des dés tomber 3 et 2 fois
 Valeur retournée : int
 Paramètre en entrée : tbde tableau_de_des,int n
 Paramètre en entrée / sortie : tabjoueur *tj
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
int BrelanFull(tbde tableau_de_des,int n);
int DeuxlanFull(tbde tableau_de_des,int n);
/****************************************************
 Nom : BrelanFull,DeuxlanFull
 Description : Calcul le full grâce aux fonction BrelanFull et DeuxlanFull
 Valeur retournée : int
 Paramètre en entrée : tbde tableau_de_des,int n
 Paramètre en entrée / sortie : tabjoueur *tj,tabbouton *tbouton
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void Full(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n);
/****************************************************
 Nom : PetiteSuite,GrandeSuite
 Description : Calcul les petites suite et les grandes suite
 Valeur retournée : int
 Paramètre en entrée : tbde tableau_de_des,int n
 Paramètre en entrée / sortie : tabjoueur *tj,tabbouton *tbouton
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void PetiteSuite(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n);
void GrandeSuite(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n);
/****************************************************
 Nom : Yahtzee
 Description : Calcul un yahtzee
 Valeur retournée : int
 Paramètre en entrée : tbde tableau_de_des,int n
 Paramètre en entrée / sortie : tabjoueur *tj,tabbouton *tbouton
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void Yahtzee(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n);
/****************************************************
 Nom : Chance
 Description : Calcul la somme des dés (chance)
 Valeur retournée : int
 Paramètre en entrée : tbde tableau_de_des,int n
 Paramètre en entrée / sortie : tabjoueur *tj,tabbouton *tbouton
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void Chance(tabbouton *tbouton,tbde tableau_de_des,tabjoueur *tj,int n);
/****************************************************
 Nom : TotalII
 Description : Calcul le TotalII
 Valeur retournée : void
 Paramètre en entrée : int n
 Paramètre en entrée / sortie : tabjoueur *tj,tabbouton *tbouton
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void TotalII(tabbouton *tbouton,tabjoueur *tj,int n);
/****************************************************
 Nom : Total
 Description : Calcul le Total final (somme de Total I et Total II)
 Valeur retournée : void
 Paramètre en entrée : int n
 Paramètre en entrée / sortie : tabjoueur *tj,tabbouton *tbouton
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void Total(tabbouton *tbouton,tabjoueur *tj,int n);

/****************************************************
 Nom : ChangeJoueur
 Description : Actualise le joueur aprés un clic sur un score
 Valeur retournée : void
 Paramètre en entrée : int nbjoueurs
 Paramètre en entrée / sortie : tabjoueur *tj
 Paramètres en sortie : 
 Auteur : Valentin Magnan
 Date de création : 03/03/2017
 Modifications (date, auteur et nature) :
 ***************************************************/
void ChangeJoueur(tabjoueur *tj,int nbjoueurs);
void compareMeilleur(tabjoueur *tj,int nbjoueurs);
