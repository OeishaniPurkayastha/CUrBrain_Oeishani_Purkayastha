#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int arrayGCD(int arr[], int n)
{
    int result = arr[0];

    for (int i = 1; i < n; i++)
    {
        result = gcd(result, arr[i]);
    }

    return result;
}

int main()
{
    int arr1[] = {24, 36, 48};
    int arr2[] = {33, 44, 55, 66};
    int arr3[] = {17};
    int arr4[] = {12, 18, 24, 30};
    int arr5[] = {1, 7, 14, 28};

    printf("%d divides all elements of the first array.\n", arrayGCD(arr1, 3));
    printf("%d divides all elements of the second array.\n", arrayGCD(arr2, 4));
    printf("%d divides all elements of the third array.\n", arrayGCD(arr3, 1));
    printf("%d divides all elements of the fourth array.\n", arrayGCD(arr4, 4));
    printf("%d divides all elements of the fifth array.\n", arrayGCD(arr5, 4));

    return 0;
}