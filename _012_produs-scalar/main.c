#include <stdio.h>

int produsScalar(int a[], int b[], int dim);

void main()
{
    int dim;
    printf("Introduceti dimensiunea vectorilor: ");
    scanf("%d", &dim);

    int a[dim], b[dim];
    printf("Introduceti elementele primului vector:\n");
    for (int i = 0; i < dim; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Introduceti elementele celui de-al doilea vector:\n");
    for (int i = 0; i < dim; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    printf("Produsul scalar al celor doi vectori este: %d\n", produsScalar(a, b, dim));
}

int produsScalar(int a[], int b[], int dim)
{
    int rezultat = 0;
    for (int i = 0; i < dim; i++)
    {
        rezultat += a[i] * b[i];
    }

    return rezultat;
}
