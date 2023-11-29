#include <stdio.h>

void main()
{
    int dim;
    printf("Introdu dimensiunea vectorului: ");
    scanf("%d", &dim);

    float vector[100];
    float sum = 0;
    for(int i = 0; i < dim; i++)
    {
        printf("v[%d] = ", i);
        scanf("%f", &vector[i]);
        sum += vector[i];
    }

    printf("Suma elementelor din vector: %f", sum);
}