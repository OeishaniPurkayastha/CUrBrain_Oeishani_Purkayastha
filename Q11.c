#include <stdio.h>

#define MOD 1000000007LL

long long modularAddition(long long arr[], int n) {
    long long result = 0;

    for (int i = 0; i < n; i++) {
        result = (result + arr[i] % MOD) % MOD;
    }

    return result;
}

int main() {
    long long arr1[] = {10000000000LL, 10000000000LL, 10000000000LL};
    long long arr2[] = {1, 2, 3, 4};
    long long arr4[] = {1000000007LL};
    long long arr5[] = {0, 0, 0};

    printf("%lld\n", modularAddition(arr1, 3));
    printf("%lld\n", modularAddition(arr2, 4));
    printf("%lld\n", modularAddition(NULL, 0));
    printf("%lld\n", modularAddition(arr4, 1));
    printf("%lld\n", modularAddition(arr5, 3));

    return 0;
}

