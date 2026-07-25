#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2)
    {
        count++;
    }

    printf("Number of odd numbers = %d\n", count);

    return 0;
}
