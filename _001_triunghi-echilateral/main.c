#include <stdio.h>

void main()
{
    int latura;
    printf("Introdu lungimea laturii unui triunghi echilateral: ");
    scanf("%d", &latura);

    printf("Aria triunghiului: %f um^2\n", (pow(latura,2)*sqrt(3))/4);
    printf("Inaltimea triunghiului: %f um", (latura*sqrt(3))/2);

}