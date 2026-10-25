
#include <stdio.h>

long long modularPower(long long base, int power, long long MOD) 
{
    long long result = 1 % MOD;

    for (int i = 0; i < power; i++) {
        result = (result * base) % MOD;
    }

    return result;
}

int main() 
{
    printf("%lld\n", modularPower(2, 10, 1000));
    printf("%lld\n", modularPower(7, 0, 13));
    printf("%lld\n", modularPower(9, 1, 7));
    printf("%lld\n", modularPower(3, 4, 1));
    printf("%lld\n", modularPower(0, 5, 11));

    return 0;
}
