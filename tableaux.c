//
// Created by Remi CHARDONNET on 06/10/2021.
//
#include <stdio.h>
#include "tableaux.h"


/* Fonction qui permet de remplir un tableau 1 dimension et de l'afficher.
 * Paramètres :
 * - INOUT : Le tableau 1 dimension
 * - IN : le tableau 1 dimension et sa taille
 * - OUT : le tableau remplit des valeurs de l'utilisateur
 */

void remplirMonTableau(int monTableau[], int N){
    int i = 0;
    printf("Saisir les valeurs du tableau une par une :\n");
    for(i = 0; i < N; i++){ //on parcourt le tableau
        scanf("%d", &monTableau[i]);
    }
    for(i = 0; i < N; i++){
        printf("%d\t", monTableau[i]);
    }
    return;
}


/* Fonction qui permet de trouver le plus grand entier dans un tableau 1 dimension.
 * Paramètres :
 * - IN : le tableau 1 dimension et sa taille
 * - OUT : la valeur entière la plus grande du tableau
 */

void plusGrandEntierTableau(int monTableau[], int N){
    int i = 0, valeurmax = monTableau[i];
    for(i = 0; i < N - 1; i++){ //on parcourt le tableau
        valeurmax = ((valeurmax > monTableau[i + 1]) ? valeurmax : monTableau[i + 1]);
    }
    printf("\nLa valeur maximale du tableau est %d", valeurmax);
    return;
}


/* Fonction qui permet de remplir un tableau 2 dimension et de l'afficher.
 * Paramètres :
 * - INOUT : Le tableau 2 dimension
 * - IN : le tableau 2 dimension, son nombre de lignes et colonnes
 * - OUT : le tableau remplit des valeurs de l'utilisateur
 */

void tableau2D(int monTableau[NB_LGN_MAX][NB_CLN_MAX], int Nlignes, int Ncolonnes){
    int i = 0, j = 0;
    printf("Saisir les valeurs du tableau une par une :\n");
    for(i = 0; i < Nlignes; i++){ //on parcourt les lignes du tableau
        for(j = 0; j < Ncolonnes; j++){ //on parcourt les colonnes du tableau
            scanf("%d", &monTableau[i][j]);
        }
    }
    for(i = 0; i < Nlignes; i++){
        printf("\n");
        for(j = 0; j < Ncolonnes; j++){
            printf("%d\t", monTableau[i][j]);
        }
    }
    return;
}


/* Fonction qui permet de transformer un tableau 2 dimension en 1 dimension.
 * Paramètres :
 * - IN : le tableau 2 dimension avec son nombre de lignes et colonnes et le tableau 1 dimension vide
 * - OUT : le tableau 1 dimension remplit des valeurs du tableau 2 dimension
 */

void transformerTableau2Den1D(int monTableau2D[NB_LGN_MAX][NB_CLN_MAX], int Nlignes, int Ncolonnes, int monTableau1D[NB_CLN_MAX * NB_CLN_MAX]){
    int i = 0, j = 0;
    for(i = 0; i < Nlignes; i++){//on parcourt les lignes du tableau
        for(j = 0; j < Ncolonnes; j++){ //on parcourt les colonnes du tableau
            monTableau1D[i * Ncolonnes + j] = monTableau2D[i][j];
        }
    }
    printf("\n\n");
    for(i = 0; i < (Ncolonnes * Nlignes); i++){
        printf("%d\t", monTableau1D[i]);
    }
    return;
}