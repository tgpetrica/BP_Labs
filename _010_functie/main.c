#include <stdio.h>

int min(int, int);
int max(int, int);
int abs(int);

void main()
{
    int a, b, c, d;
    printf("Citeste cele 4 numere: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a + b > c - d)
    {
        printf("Valoarea functiei este: %d", max(min(abs(a) - 3 * b, c - 2 * abs(d)), min(abs(a) + 3 * b, c + 2 * abs(d))));
    }
    else
    {
        printf("Valoarea functiei este: %d", min(max(abs(a) - 3 * b, c - 2 * abs(d)), max(abs(a) + 3 * b, c + 2 * abs(d))));
    }
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int abs(int a)
{
    if (a < 0)
    {
        return -a;
    }
    return a;
}
