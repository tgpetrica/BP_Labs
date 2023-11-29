#include <stdio.h>
#include <math.h>

void main()
{
    int dim;
    printf("Introdu dimensiunea sirului: ");
    scanf("%d", &dim);

    int sir[30], elementePozitive = 0;
    float medieGeometrica = 1;
    for (int i = 0; i < dim; i++)
    {
        printf("sir[%d] = ", i);
        scanf("%d", &sir[i]);
        if (sir[i] > 0)
        {
            medieGeometrica *= sir[i];
            elementePozitive++;
        }
    }

    if (elementePozitive)
    {
        medieGeometrica = pow(medieGeometrica, 1 / (float) elementePozitive);
        printf("%f", medieGeometrica);
    }
    else
    {
        printf("Nu se poate calcula media geometrica");
    }
}