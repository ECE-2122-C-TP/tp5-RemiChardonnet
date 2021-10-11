#include <stdio.h>
#include "tableaux.h"
#include "fonctions.h"
#include "exercices.h"

int main() {
    int ChoixExo = 0;
    printf("~~~~~~~~~\tTP5 \t~~~~~~~~~\n");
    do{
        printf("\nChoisir un exercice : (Pour sortir taper 0)\n>");
        scanf("%d", &ChoixExo);
        switch (ChoixExo){
            case 1 :
                exercice1();
                break;
            case 2 :
                exercice2();
                break;
            case 3 :
                exercice3();
                break;
            case 0 :
                break;
            default:{
                printf("Choix Impossible! Saisir un exercice :\n>");
                break;
            }
        }
    }
    while(ChoixExo != 0);
    printf("\nBye :)\n");
    return 0;
}
