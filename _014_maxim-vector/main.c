#include<stdio.h>

void main()
{
    int dimensiune;
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &dimensiune);

    int vector[dimensiune];

    int i = 0;
    while (i < dimensiune)
    {
        printf("vector[%d] = ", i);
        scanf("%d", &vector[i]);
        i++;
    }

    int maxim = vector[0];
    for (int i = 0; i < dimensiune; i++)
    {
        if (vector[i] > maxim)
        {
            maxim = vector[i];
        }
    }

    printf("Maximum din vector este %d", maxim);
}