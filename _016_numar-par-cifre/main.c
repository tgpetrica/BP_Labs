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
        int numarCifre = 0;
        int copie = vector[i];
        while (copie)
        {
            numarCifre++;
            copie /= 10;
        }
        if (numarCifre % 2 == 1)
        {
            flag = 0;
        }
        i++;
    }

    if(flag)
    {
        printf("Toate numerele au numar par de cifre.");
    }
    else
    {
        printf("Nu toate numerele au numar par de cifre.");
    }

}