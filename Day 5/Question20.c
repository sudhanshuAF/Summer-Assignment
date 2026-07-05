#include <stdio.h>

int main()
{
    int n, i, j, isPrime, largestPrimeFactor = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            isPrime = 1;

            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime)
            {
                largestPrimeFactor = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestPrimeFactor);

    return 0;
}