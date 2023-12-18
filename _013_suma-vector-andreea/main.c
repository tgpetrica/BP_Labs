#include <stdio.h>

void main()
{
    int dimensiune;
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &dimensiune);

    int vector[dimensiune];

    int suma = 0;

    for (int i = 0; i < dimensiune; i++)
    {   
        printf("vector[%d] = ", i);
        scanf("%d", &vector[i]);
        suma += vector[i];
    }

    printf("Suma elementelor vectorului este: %d", suma);

}