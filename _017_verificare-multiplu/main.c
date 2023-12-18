#include <stdio.h>

void main()
{
    int dimensiune;
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &dimensiune);

    int vector[dimensiune];
    printf("Introduceti elementele vectorului: \n");
    for (int i = 0; i < dimensiune; i++)
    {   
        printf("vector[%d] = ", i);
        scanf("%d", &vector[i]);
    }

    int i = 0;
    int flag = 1;
    while (i < dimensiune - 1 && flag)
    {
        if (vector[i] % vector[dimensiune - 1] != 0)
        {
            flag = 0;
        }
        i++;
    }

    if(flag)
    {
        printf("Toate numerele sunt multiplu de %d.", vector[dimensiune - 1]);
    }
    else
    {
        printf("Nu toate numerele sunt multiplu de %d.", vector[dimensiune - 1]);
    }
}