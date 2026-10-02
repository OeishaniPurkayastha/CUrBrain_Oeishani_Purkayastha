#include <stdio.h>

int digitFrequencyDifference(int n, int a, int b)
{
    int countA = 0;
    int countB = 0;

    if (n == 0)
    {
        if (a == 0)
            countA = 1;

        if (b == 0)
            countB = 1;
    }
    else
    {
        while (n > 0)
        {
            int digit = n % 10;

            if (digit == a)
                countA++;

            if (digit == b)
                countB++;

            n = n / 10;
        }
    }

    if (countA > countB)
        return countA - countB;
    else
        return countB - countA;
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

        int result = digitFrequencyDifference(n, a, b);

        printf("Input: n = %d, a = %d, b = %d\n", n, a, b);
        printf("Output: %d\n", result);

        printf("Frequency of %d = ", a);

        if (n == 0)
        {
            printf("%d", a == 0 ? 1 : 0);
        }
        else
        {
            int temp = n;
            int countA = 0;

            while (temp > 0)
            {
                if (temp % 10 == a)
                    countA++;

                temp = temp / 10;
            }

            printf("%d", countA);
        }

        printf("; Frequency of %d = ", b);

        if (n == 0)
        {
            printf("%d", b == 0 ? 1 : 0);
        }
        else
        {
            int temp = n;
            int countB = 0;

            while (temp > 0)
            {
                if (temp % 10 == b)
                    countB++;

                temp = temp / 10;
            }

            printf("%d", countB);
        }

        printf("\n\n");
    }

    return 0;
}