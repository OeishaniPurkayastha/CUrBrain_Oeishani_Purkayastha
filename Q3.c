#include <stdio.h>

int reverseNumber(int n)
{
    int sign = 1;
    int reverse = 0;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }

    return sign * reverse;
}

int main()
{
    int testCases[] = {121, 123, 0, -45, 120};

    int i;

    for (i = 0; i < 5; i++)
    {
        int n = testCases[i];
        int reverse = reverseNumber(n);

        printf("Input: %d\n", n);
        printf("Reverse = %d\n", reverse);

        if (n == reverse)
        {
            printf("Output: %d\n", n);
            printf("%d is a palindrome, so return the number itself.\n", n);
        }
        else
        {
            int result = n + reverse;

            printf("Output: %d\n", result);
            printf("%d + (%d) = %d\n", n, reverse, result);
        }

        printf("\n");
    }

    return 0;
}