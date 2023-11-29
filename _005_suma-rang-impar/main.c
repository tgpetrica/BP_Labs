#include <stdio.h>

void main()
{
    int dim;
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &dim);

    int vector[30], sum;
    for (int i = 0; i < dim; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &vector[i]);
        if (i % 2 == 0)
        {
            sum += vector[i];
        }
    }

    printf("Suma elementelor de rang impar din vector este: %d", sum);
}