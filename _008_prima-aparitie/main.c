#include <stdio.h>

void main()
{
    int dim;
    printf("Introdu dimensiunea vectorului: ");
    scanf("%d", &dim);

    int vector[30];
    for (int i = 0; i < dim; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &vector[i]);
    }

    int valoareCautata, i;
    printf("Introdu valoarea cautata: ");
    scanf("%d", &valoareCautata);

    for (i = 0; i < dim; i++)
    {
        if (vector[i] == valoareCautata)
        {
            break;
        }
    }

    if (i != dim)
    {
        printf("Valoarea cautata se afla la pozitia %d", i);
    }
    else
    {
        printf("Valoarea cautata nu exista in vector");
    }
}