#include <stdio.h>

int main()
{
    int n, i;
    int oddCount = 0, evenCount = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Number of Odd numbers = %d\n", oddCount);
    printf("Number of Even numbers = %d\n", evenCount);

    return 0;
}
