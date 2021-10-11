//
// Created by Remi CHARDONNET on 06/10/2021.
//
#include <stdio.h>
#include "fonctions.h"
#include "exercices.h"
#include "tableaux.h"

#define NB_ELT_MAX 100
#define NB_LGN_MAX 20
#define NB_CLN_MAX 30


/* Fonction qui permet de choisir 2 nombres rationnels, de les afficher, de les multiplier et de les additioner.
 * Paramètres :
 * - IN : pas d'entrée
 * - OUT : les nombres rationnels, leur multiplication et l'addition
 */

void exercice1(){
    printf("~~~~~~~~~\tExercice1 : Nombre Rationnel( Affichage, Multiplication, Addition) \t~~~~~~~~~\n");
    printf("Premier nombre rationnel :\n");
    NombreRationnel RN1 = saisirNombreRationnel();
    printf("Deuxieme nombre rationnel :\n");
    NombreRationnel RN2 = saisirNombreRationnel();
    valeurSimplifiee(RN1);
    affichageNombreRationnel(RN1);
    valeurSimplifiee(RN2);
    affichageNombreRationnel(RN2);
    printf("\n\nLa valeur de la multiplication des 2 rationnels est %f", multiplicationNombreRationnel(RN1, RN2));
    printf("\n\nLa valeur de l'addition des 2 rationnels est %f", additionNombreRationel(RN1, RN2));
    return;

}


/* Fonction qui permet de choisir un tableau a N elements, de le remplir et de trouver la valeur entière la plus grande du tableau.
 * Paramètres :
 * - IN : pas d'entrée
 * - OUT : Un tableau 1 dimension remplit avec la valeur entière la plus grande
 */

void exercice2(){
    printf("~~~~~~~~~\tExercice2 : Tableau 1 dimension (valeur max du tableau) \t~~~~~~~~~\n");
    int tableau[NB_ELT_MAX], N = 0;
    printf("Saisir le nombre de valeur a saisir dans le tableau :\n>");
    scanf("%d", &N);
    if(N > NB_ELT_MAX){
        printf("Impossible car %d est superieur au nombre de valeur maximale %d", N, NB_ELT_MAX);
        return;
    }
    remplirMonTableau(tableau, N);
    plusGrandEntierTableau(tableau, N);
    return;
}


/* Fonction qui permet de choisir un tableau 2 dimension avec N lignes, C colonnes de le remplir et de le transformer en tableau 1 dimension.
 * Paramètres :
 * - IN : pas d'entrée
 * - OUT : Un tableau 1 dimension remplit avec les valeurs du tableau 2 dimension que l'on a remplit
 */

void exercice3(){
    printf("~~~~~~~~~\tExercice3 : Tableau 2 dimensions (remettre en ligne tableau 1 dimension) \t~~~~~~~~~\n");
    int tableau[NB_LGN_MAX][NB_CLN_MAX], Nlignes = 0, Ncolonnes = 0, tableau1D[NB_ELT_MAX];
    printf("Saisir le nombre de lignes et de colonnes a saisir dans le tableau :\n>");
    scanf("%d %d", &Nlignes, &Ncolonnes);
    if(Nlignes > NB_LGN_MAX){
        printf("Impossible car %d est superieur au nombre de valeur maximale %d", Nlignes, NB_LGN_MAX);
        return;
    }
    if(Ncolonnes > NB_CLN_MAX){
        printf("Impossible car %d est superieur au nombre de valeur maximale %d", Ncolonnes, NB_CLN_MAX);
        return;
    }
    tableau2D(tableau, Nlignes, Ncolonnes);
    transformerTableau2Den1D(tableau , Nlignes, Ncolonnes, tableau1D);
    return;
}