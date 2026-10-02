#include <stdio.h>

int digitFrequencyDifference(int n, int a, int b, int *countA, int *countB)
{
    *countA = 0;
    *countB = 0;

    if (n == 0)
    {
        if (a == 0)
            *countA = 1;

        if (b == 0)
            *countB = 1;
    }
    else
    {
        while (n > 0)
        {
            int digit = n % 10;

            if (digit == a)
                (*countA)++;

            if (digit == b)
                (*countB)++;

            n = n / 10;
        }
    }

    /* Calculate absolute difference */
    if (*countA > *countB)
        return *countA - *countB;
    else
        return *countB - *countA;
}

int main()
{
    int testCases[][3] =
    {
        {112231, 1, 2},
        {55555, 5, 2},
        {123456, 3, 6},
        {0, 0, 5},
        {1002001, 0, 1}
    };

    for (int i = 0; i < 5; i++)
    {
        int n = testCases[i][0];
        int a = testCases[i][1];
        int b = testCases[i][2];

        int countA;
        int countB;

        int result = digitFrequencyDifference(
            n, a, b, &countA, &countB
        );

        printf("Input: n = %d, a = %d, b = %d\n", n, a, b);

        printf("Frequency of %d = %d\n", a, countA);
        printf("Frequency of %d = %d\n", b, countB);

        printf("Absolute difference = |%d - %d| = %d\n",
               countA, countB, result);

        printf("Output: %d\n\n", result);
    }

    return 0;
}
