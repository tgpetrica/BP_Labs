#include <stdio.h>
#include <string.h>

void main()
{
    FILE *fp;
    char linie[200];
    long suma = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("Fisier negasit.\n");
        return;
    }

    while (fgets(linie, 200, fp) != NULL)
    {
        int nr = 0;
        int count = 0;
        for (int i = 0; linie[i] != '\0'; i++)
        {
            if (linie[i] >= '0' && linie[i] <= '9')
            {
                count++;
            }            
        }
        if (count == 1)
        {
            for (int i = 0; linie[i] != '\0'; i++)
            {
                if (linie[i] >= '0' && linie[i] <= '9')
                {
                    nr = (linie[i] - '0') * 10 + (linie[i] - '0');
                    break;
                }            
            }
        }
        else
        {
            for (int i = strlen(linie); i > 0; i--)
            {
                if (linie[i] >= '0' && linie[i] <= '9')
                {
                    nr = linie[i] - '0';
                    break;
                }            
            }

            for (int i = 0; linie[i] != '\0'; i++)
            {
                if (linie[i] >= '0' && linie[i] <= '9')
                {
                    nr = (linie[i] - '0') * 10 + nr;
                    break;
                }            
            }
        }
        suma += nr;
    }

    fclose(fp);
    printf("Valoarea de calibrare: %ld\n", suma);
}