
#include <stdio.h>

// Helper function to reverse a sub-segment
void reverseArray(int arr[], int left, int right)
{
    while(left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

// Function to rotate array to the right
void rotate(int arr[], int n, int k)
{
    k = k % n;

    // Step 1: Reverse entire array
    reverseArray(arr, 0, n - 1);

    // Step 2: Reverse first k elements
    reverseArray(arr, 0, k - 1);

    // Step 3: Reverse remaining elements
    reverseArray(arr, k, n - 1);
}

// Function to print array
void printArray(int arr[], int n)
{
    printf("[");
    
    for(int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if(i < n - 1)
            printf(", ");
    }

    printf("]\n");
}

int main()
{
    // Test Case 1
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int n1 = 7, k1 = 3;

    printf("Test Case 1:\n");
    rotate(arr1, n1, k1);
    printArray(arr1, n1);


    // Test Case 2
    int arr2[] = {-1, -100, 3, 99};
    int n2 = 4, k2 = 2;

    printf("\nTest Case 2:\n");
    rotate(arr2, n2, k2);
    printArray(arr2, n2);


    // Test Case 3
    int arr3[] = {1, 2};
    int n3 = 2, k3 = 5;

    printf("\nTest Case 3:\n");
    rotate(arr3, n3, k3);
    printArray(arr3, n3);


    // Test Case 4
    int arr4[] = {1};
    int n4 = 1, k4 = 10;

    printf("\nTest Case 4:\n");
    rotate(arr4, n4, k4);
    printArray(arr4, n4);


    // Test Case 5
    int arr5[] = {1, 2, 3};
    int n5 = 3, k5 = 0;

    printf("\nTest Case 5:\n");
    rotate(arr5, n5, k5);
    printArray(arr5, n5);

    return 0;
}
