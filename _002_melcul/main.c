#include <stdio.h>

void main()
{
    float D, H;
    printf("Introdu numarul de metri si apoi numarul de ore: ");
    scanf("%d%d", &D, &H);

    printf("Viteza melcului este de: %.2f MPS", D/(H*3600));
}