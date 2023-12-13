#include <stdio.h>

unsigned short factorialRecursiv(unsigned short);
unsigned short factorialIterativ(unsigned short);

void main()
{
    unsigned short numar;
    printf("Introduceti un numar: ");
    scanf("%hi", &numar);

    printf("Factorialul numarului %hi este %hi (recursiv)\n", numar, factorialRecursiv(numar));
    printf("Factorialul numarului %hi este %hi (iterativ)\n", numar, factorialIterativ(numar));
} 

unsigned short factorialRecursiv(unsigned short numar)
{
    if (numar == 0)
        return 1;
    else
        return numar * factorialRecursiv(numar - 1);
}

unsigned short factorialIterativ(unsigned short numar)
{
    int factorial = 1;
    for (int i = 1; i <= numar; i++)
        factorial *= i;
    return factorial;
}