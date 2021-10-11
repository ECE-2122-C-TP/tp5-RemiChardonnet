//
// Created by Remi CHARDONNET on 06/10/2021.
//
#include <stdio.h>
#include "fonctions.h"


/* Fonction qui permet de rentrer un nombre rationnel (son numérateur et son dénominateur).
 * Paramètres :
 * - IN : pas de variable d'entrée
 * - OUT : le nombre rationnel sous forme de structure avec son numérateur et son dénominateur
 */

NombreRationnel saisirNombreRationnel(){
    NombreRationnel NR;
    printf("Saisir un numerateur et un denominateur :\n>");
    scanf("%d %d", &NR.numerateur, &NR.denominateur);
    return NR;
}


/* Fonction qui permet de simplifier les nombres rationnels sous forme de fraction.
 * Paramètres :
 * - IN : la structure du nombre rationnel (numérateur et dénominateur)
 * - OUT : le nombre rationnel sous forme simplifiéé de fraction
 */

void valeurSimplifiee(NombreRationnel NR){
    int i = 1, PGCD = 1;
    for(i = 1; i <= NR.numerateur && i <= NR.denominateur; i++){ //on cherche le pgcd pour diviser le numérateur et le dénominateur
        if(NR.numerateur % i == 0 && NR.denominateur % i == 0) {
            PGCD = i;
        }
    }
    printf("\n\nLe nombre rationnel simplifie est %d/%d", (NR.numerateur / PGCD), (NR.denominateur / PGCD));
    return ;
}


/* Fonction qui permet d'afficher un nombre rationnel sous forme décimale.
 * Paramètres :
 * - IN : la structure du nombre rationnel (numérateur et dénominateur)
 * - OUT : le nombre rationnel sous forme décimale
 */

float affichageNombreRationnel(NombreRationnel NR){
    float Rationnel = ((float)NR.numerateur / (float)NR.denominateur);
    printf("\nLe valeur du nombre rationnel est %f", Rationnel);
    return Rationnel;
}


/* Fonction qui permet de multiplier deux nombres rationnels entre eux.
 * Paramètres :
 * - IN : deux structures de nombre rationnel (numérateur et dénominateur)
 * - OUT : le résultat de la multiplicaion des nombres rationnels sous forme simplifiéé de fraction et décimale
 */

float multiplicationNombreRationnel(NombreRationnel NR1, NombreRationnel NR2){
    NombreRationnel NR;
    NR.numerateur = NR1.numerateur * NR2.numerateur;
    NR.denominateur = NR1.denominateur * NR2.denominateur;
    printf("\n\n~~~~~~La multiplication des 2 nombres rationnels :");
    valeurSimplifiee(NR); //utilisation d'une fonction définit plus haut pour la valeur simplifiée de fraction
    return ((float)NR.numerateur / (float)NR.denominateur);
}


/* Fonction qui permet d'additioner deux nombres rationnels entre eux.
 * Paramètres :
 * - IN : deux structures de nombre rationnel (numérateur et dénominateur)
 * - OUT : le résultat de l'addition des nombres rationnels sous forme simplifiéé de fraction et décimale
 */

float additionNombreRationel(NombreRationnel NR1, NombreRationnel NR2){
    NombreRationnel NR;
    NR.numerateur = (NR1.numerateur * NR2.denominateur) + (NR2.numerateur * NR1.denominateur);
    NR.denominateur = NR1.denominateur * NR2.denominateur;
    printf("\n\n~~~~~~L'addition des 2 nombres rationnels :");
    valeurSimplifiee(NR); //utilisation d'une fonction définit plus haut pour la valeur simplifiée de fraction
    return ((float)NR.numerateur / (float)NR.denominateur);
}
