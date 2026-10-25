
#include <stdio.h>
#include <stdlib.h>

int checkPrefixModulo(int arr[], int n, int k) {
    int sum = 0;
    k = abs(k);

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum % k == 0) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int arr1[] = {4, 2, 9};
    printf("%s\n", checkPrefixModulo(arr1, 3, 3) ? "True" : "False");

    int arr2[] = {1, 2, 4};
    printf("%s\n", checkPrefixModulo(arr2, 3, 5) ? "True" : "False");

    int arr3[] = {5};
    printf("%s\n", checkPrefixModulo(arr3, 1, 5) ? "True" : "False");

    int arr4[] = {0, 1};
    printf("%s\n", checkPrefixModulo(arr4, 2, 7) ? "True" : "False");

    int arr5[] = {-2, 2, 1};
    printf("%s\n", checkPrefixModulo(arr5, 3, 3) ? "True" : "False");

    return 0;
}
