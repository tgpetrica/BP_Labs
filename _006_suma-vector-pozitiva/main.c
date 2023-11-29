#include <stdio.h>

void main()
{
    int dim;
    printf("Scrieti dimensiunea vectorului: ");
    scanf("%d", &dim);

    int vector[30];
    int suma = 0;
    for (int i = 0; i < dim; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &vector[i]);
        if (vector[i] > 0)
        {
            suma += vector[i];
        }
    }

    printf("Suma elementelor pozitive din vector este: %d", suma);
}