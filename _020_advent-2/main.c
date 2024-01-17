#include <stdio.h>
#include <string.h>

#define one     1
#define two     2
#define three   3
#define four    4
#define five    5
#define six     6
#define seven   7
#define eight   8
#define nine    9
#define zero    0

void main()
{
    FILE *fp;
    char line[300];
    long suma = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("Fisier negasit.\n");
        return;
    }

    while (fgets(line, 300, fp) != NULL)
    {
        // save each line in a file
        // use defined constants to replace the numbers
        // ?? use atoi() to convert the string to int

    }
    fclose(fp);
    printf("Suma este: %ld\n", suma);
}