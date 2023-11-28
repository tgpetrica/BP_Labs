#include <stdio.h>
#include <math.h>

void main()
{
    double f(double x)
    {
        if (x <= 10)
        {
            return sqrt(fabs(2 - pow(x ,2)));
        }
        else
        {
            return (-2 * x + 1) / 3;
        }
    }
    
    double nr;
    printf("Introdu valoarea unui numar real: ");
    scanf("%lf", &x);

    printf(" f(x) = %lf", f(x));
}