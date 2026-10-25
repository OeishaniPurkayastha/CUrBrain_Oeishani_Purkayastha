
#include <stdio.h>

int secondHighest(int arr[], int n) {
    int highest = -1;
    int second = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > highest) {
            second = highest;
            highest = arr[i];
        } 
        else if (arr[i] < highest && arr[i] > second) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr1[] = {50, 40, 50, 30};
    printf("%d\n", secondHighest(arr1, 4));

    int arr2[] = {100, 100, 100};
    printf("%d\n", secondHighest(arr2, 3));

    printf("%d\n", secondHighest(NULL, 0));

    int arr4[] = {10, 20, 30, 40};
    printf("%d\n", secondHighest(arr4, 4));

    int arr5[] = {5, 5, 4, 4, 3};
    printf("%d\n", secondHighest(arr5, 5));

    return 0;
}
