#include <stdio.h>
#include <stdlib.h>

int countPrimes(int n)
{
    if (n <= 2)
        return 0;

    int *prime = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        prime[i] = 1;

    prime[0] = 0;
    prime[1] = 0;

    for (int i = 2; i * i < n; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j < n; j += i)
                prime[j] = 0;
        }
    }

    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 1)
            count++;
    }

    free(prime);
    return count;
}

int main()
{
    printf("%d\n", countPrimes(10));
    printf("%d\n", countPrimes(2));
    printf("%d\n", countPrimes(0));
    printf("%d\n", countPrimes(3));
    printf("%d\n", countPrimes(30));

    return 0;
}