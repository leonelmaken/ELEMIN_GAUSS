#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
/*DONGMO DJOUAKE 20U2922*/
int main()
{
    int N,c,a,i,j,n=2,m=2;
        printf("entrer le nombre de ligne :\t");
    scanf("%d",&n);
    printf("entrer le nombre de colonnes :\t");
    scanf("%d",&m);
    int **matrix = creer_matrix(n,m);
    remplie_matrix(matrix,n,m);
    affiche(matrix,n,m);
    nature_matrice(matrix,n,m);
    if(nature_matrice(matrix,n,m)== 1)
    {
        printf("triangulaire superieur\n");
    }
        if(nature_matrice(matrix,n,m)== 2)
    {
        printf("triangulaire inferieur\n");
    }
        if(nature_matrice(matrix,n,m)== 3)
    {
        printf("matrice diagonale\n");
    }
        if(nature_matrice(matrix,n,m)== 4)
    {
        printf("matrice quelconque\n");
    }
    printf("algorithme d'elemination de gauss\n");
    return 0;
}
