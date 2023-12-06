#include <stdio.h>

void main()
{
    int n, m, M[20][20]; // n linii; m coloane

    printf("Introdu numarul de linii: ");
    scanf("%d", &n);

    printf("Introdu numarul de coloane: ");
    scanf("%d", &m);

    if (n == m)
    {
        printf("Matrice patratica\n");
    }
    else
    {
        printf("Matrice dreptunghiulara\n");
    }

    // citirea elementelor din matrice
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    // calcularea sumei elementelor din matrice
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            suma += M[i][j];
        }
    }
    
    // gasirea maximului de pe fiecare linie a matricei
    int vectorMaxim[20], max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vectorMaxim[i] = 0;
            if (vectorMaxim[i] < M[i][j])
            {
                vectorMaxim[i] = M[i][j];
            }
        }
        printf("Maximum de pe linia %d este %d\n", i, vectorMaxim[i]);
    }

    // gasirea maximului din matrice
    for (int i = 0; i < n; i++)
    {
        if (max < vectorMaxim[i])
        {
            max = vectorMaxim[i];
        }
    }
    printf("Valoarea maxima din matricea M este %d\n", max);
    
    // afisarea matricei
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("Suma elementelor matricei M este: %d", suma);

}