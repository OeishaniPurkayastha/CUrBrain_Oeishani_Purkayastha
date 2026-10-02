#include <stdio.h>

void replaceEvenDigits(int n, int result[])
{
    int temp = n;
    int count = 0;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        int digit = n % 10;

        if (digit % 2 == 0)
            result[i] = 0;
        else
            result[i] = digit;

        n = n / 10;
    }
}

int main()
{
    int testCases[] = {258, 12345, 2468, 13579, 1002};

    for (int i = 0; i < 5; i++)
    {
        int n = testCases[i];
        int result[10];

        replaceEvenDigits(n, result);

        int temp = n;
        int count = 0;

        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }

        printf("Input: %d\n", n);
        printf("Output: [");

        for (int j = 0; j < count; j++)
        {
            printf("%d", result[j]);

            if (j < count - 1)
                printf(", ");
        }

        printf("]\n\n");
    }

    return 0;
}