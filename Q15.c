
#include <stdio.h>
#include <stdlib.h>

int minimumAbsoluteValue(int arr[], int n) {
    int minValue = arr[0];

    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) < abs(minValue)) {
            minValue = arr[i];
        }
    }

    return minValue;
}

int main() {
    int arr1[] = {10, -5, -2, 4, 2};
    printf("%d\n", minimumAbsoluteValue(arr1, 5));

    int arr2[] = {-3, 3};
    printf("%d\n", minimumAbsoluteValue(arr2, 2));

    int arr3[] = {0, -1, 1};
    printf("%d\n", minimumAbsoluteValue(arr3, 3));

    int arr4[] = {7, -7, 4};
    printf("%d\n", minimumAbsoluteValue(arr4, 3));

    int arr5[] = {5, -2, 2, -1};
    printf("%d\n", minimumAbsoluteValue(arr5, 4));

    return 0;
}
