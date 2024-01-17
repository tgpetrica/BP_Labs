/*
Fie o matrice de dimensiuni mxn, reprezentând cantitățile fabricate într-o lună pentru m produse în n ateliere 
și un vector de dimensiune m, reprezentând prețurile de desfacere. 
Să se scrie ① subprogramul C care determină pentru fiecare atelier numărul de produse care nu s-au fabricat, 
            ② programul apelator. Transferul datelor se va realiza exclusiv prin parametri.
*/

#include <stdio.h>

void produseNefabricate(int [][10], int, int);

void main()
{
    int m,n;
    printf("Dati cantitatea de produse: ");
    scanf("%d", &m);

    printf("Dati numarul de ateliere: ");
    scanf("%d", &n);

    int matrice[10][10];
    int vector[10];   

    printf("Se citeste matricea cantitati x ateliere: \n");
    for(int i = 0 ; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("matrice[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
    
    printf("Se citeste vectorul preturilor de desfacere: ");
    for (int i = 0; i < m; i++)
    {
        printf("vector[%d] = ", i);
        scanf("%d", &vector[i]);
    }

    produseNefabricate(matrice, m, n);
}

void produseNefabricate(int matrice[][10], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        printf("In atelierul %d nu au fost fabricate urmatoarele produse: \n", j);
        for (int i = 0; i < m; i++)
        {
            if (matrice[i][j] == 0)
            {
                //produs nefabricat
                printf("id : %d\n", i);
            }
        }
        printf("\n");
    }
}