#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int nextPrime(int n)
{
    int candidate = n + 1;

    if (candidate < 2)
        candidate = 2;

    while (isPrime(candidate) == 0)
    {
        candidate++;
    }

    return candidate;
}

int main()
{
    printf("%d is the next prime number after 14.\n", nextPrime(14));
    printf("%d is the next prime number after 0.\n", nextPrime(0));
    printf("%d is the next prime number after 1.\n", nextPrime(1));
    printf("%d is the next prime number after 2.\n", nextPrime(2));
    printf("%d is the next prime number after 17.\n", nextPrime(17));

    return 0;
}