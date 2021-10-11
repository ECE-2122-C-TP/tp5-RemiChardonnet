//
// Created by Remi CHARDONNET on 06/10/2021.
//

#ifndef TP5_FONCTIONS_H
#define TP5_FONCTIONS_H

typedef struct NombreRationnel{
    int numerateur, denominateur;
} NombreRationnel ;

NombreRationnel saisirNombreRationnel();
void valeurSimplifiee(NombreRationnel NR);
float affichageNombreRationnel(NombreRationnel NR);
float multiplicationNombreRationnel(NombreRationnel NR1, NombreRationnel NR2);
float additionNombreRationel(NombreRationnel NR1, NombreRationnel NR2);

#endif //TP5_FONCTIONS_H
