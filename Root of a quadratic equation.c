#include <stdio.h>
#include <math.h>

int main()
{
    float a = 2, b = -5, c = 2;
    float d, x1, x2;

    d = b*b - 4*a*c;

    if(d > 0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        printf("Root 1 = %.2f\n", x1);
        printf("Root 2 = %.2f\n", x2);
    }
    else if(d == 0)
    {
        x1 = -b / (2*a);
        printf("Equal roots = %.2f\n", x1);
    }
    else
    {
        printf("Imaginary roots.\n");
    }

    return 0;
}
