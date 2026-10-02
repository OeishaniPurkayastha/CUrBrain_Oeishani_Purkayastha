#include <stdio.h>

int reverseAndDouble(int n, int *reversed)
{
    int sign = 1;
    *reversed = 0;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n != 0)
    {
        *reversed = *reversed * 10 + n % 10;
        n = n / 10;
    }

    *reversed = *reversed * sign;

    return *reversed * 2;
}

int main()
{
    int testCases[] = {123, -45, 0, 1200, 9};

    for (int i = 0; i < 5; i++)
    {
        int reversed;
        int result = reverseAndDouble(testCases[i], &reversed);

        printf("Input: %d\n", testCases[i]);
        printf("Output: %d\n", result);
        printf("Reverse = %d; %d x 2 = %d\n\n",
               reversed, reversed, result);
    }

    return 0;
}