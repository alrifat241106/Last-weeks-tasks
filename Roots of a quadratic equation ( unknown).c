#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("Enter the value of a");
    scanf("%f", &a);
    printf("Enter the value of b");
    scanf("%f", &b);
    printf("Enter the value of c");
    scanf("%f", &c);

    float d, x1, x2;
    d = b*b - 4*a*c;

    if(d > 0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
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
