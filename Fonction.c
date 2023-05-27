#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
/*DONGMO DJOUAKE 20U2922*/

int **creer_matrix(int n,int m)
{
    int i;
    int **matrix;
    matrix = malloc(sizeof(int*)*n);
        for(i=0;i<n;i++)
        {
          matrix[i] = (int *)malloc(sizeof(int)*n);
        }
        return matrix;
}
void remplie_matrix(int **matrix,int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          printf("[%d][%d] :",i,j);
          scanf("%d",&matrix[i][j]);
        }
    }
}
void affiche(int **matrix,int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
int  nature_matrice(int **matrix,int n,int m)
{
    int i,j;
    int D,C,A,E;
    D = 1,C = 2,A = 3,E = 4;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i>j && matrix[i][j]!=0)/*triangulaire superieru*/
            {
                D = 0;
            }
            if(i<j && matrix[i][j] != 0)/*triangulaire inferieur*/
            {
                C = 0;
            }
        }
    }

    if(D==1 && C==2)
    {
        return A;/*matrice diagonale*/
    }
    else if(D == 1)
       {
         return D ;
       }
       else if(C == 2)
           {
              return C;
          }
    else
    {
        return E;/*matrice quelconque*/
    }

}
/*int elimination_de_gauss(int **matrix,int n,int m)
{
    int i,j,k,coef;
   int tab = creer_matrice(n, m);

    for(k = 1;k<n-1;k++)
    {
        for(i=k+1;i<n;i++)
        {
            coef = matrix[i][k]/matrix[k][k];
            for(j=0;j<n;j++)
            {
                matrix[i][j]=matrix[i][j]-coef* matrix[k][j];
            }
         tab[i][k]= tab[i][k]-coef*tab[j][k];
        }
    }
    return tab;
}
*/
