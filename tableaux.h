//
// Created by Remi CHARDONNET on 06/10/2021.
//

#ifndef TP5_TABLEAUX_H
#define TP5_TABLEAUX_H

#define NB_LGN_MAX 20
#define NB_CLN_MAX 30

void remplirMonTableau(int monTableau[], int N);
void plusGrandEntierTableau(int monTableau[], int N);
void tableau2D(int monTableau[NB_LGN_MAX][NB_CLN_MAX], int Nlignes, int Ncolonnes);
void transformerTableau2Den1D(int monTableau2D[NB_LGN_MAX][NB_CLN_MAX], int Nlignes, int Ncolonnes, int monTableau1D[NB_CLN_MAX * NB_CLN_MAX]);

#endif //TP5_TABLEAUX_H
