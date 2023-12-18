#include <stdio.h>

void main()
{
    int dimensiune1;
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &dimensiune1);

    int vector1[dimensiune1];
    printf("Introduceti elementele vectorului 1: \n");
    for (int i = 0; i < dimensiune1; i++)
    {   
        printf("vector1[%d] = ", i);
        scanf("%d", &vector1[i]);
    }

    int dimensiune2;
    printf("Introduceti dimensiunea vectorului 2: ");
    scanf("%d", &dimensiune2);

    int vector2[dimensiune2];
    printf("Introduceti elementele vectorului 2: \n");
    for (int i = 0; i < dimensiune2; i++)
    {   
        printf("vector2[%d] = ", i);
        scanf("%d", &vector2[i]);
    }

    if (dimensiune1 != dimensiune2)
    {
        printf("Vectorii nu au aceeasi dimensiune.");
        return;
    }

    int i = 0;
    int flag = 1;
    while (i < dimensiune1 && flag)
    {
        int j = 0;
        int gasit = 0;
        while (j < dimensiune2 && !gasit)
        {
            if (vector1[i] == vector2[j])
            {
                gasit = 1;
            }
            j++;
        }
        if (!gasit)
        {
            flag = 0;
        }
        i++;
    }

    if (flag)
    {
        printf("Vectorii au aceleasi elemente.");
    }
    else
    {
        printf("Vectorii nu au aceleasi elemente.");
    }

}