#include <stdio.h>

int hasEvenNumberOfDigits(int n)
{
    int count = 0;
    if (n == 0) 
    {
        return 1;
    }
    else if (n < 0) 
    {
        n = -n;
    }
    else 
    {
        while (n != 0) 
        {
        n = n / 10;
        count++;
        }
    }
    return (count % 2 == 0);
}
int main()
{
    int testCases[] = {1234, 12345, 0, -100000, -7};
    int expectedResults[] = {1, 0, 0, 1, 0};

    for (int i = 0; i < 5; i++)
    {
        int result = hasEvenNumberOfDigits(testCases[i]);

        printf("Input : %d\n", testCases[i]);

        printf("Expected Output : %s\n",
               expectedResults[i] ? "True" : "False");

        if (testCases[i] == 0)
        {
            printf("Reason : 0 has 1 digit\n");
        }
        else
        {
            int n = testCases[i];
            int count = 0;

            if (n < 0)
            {
                n = -n;
            }

            while (n != 0)
            {
                n = n / 10;
                count++;
            }

            printf("Reason : %d digits\n", count);
        }

        printf("\n");
    }

    return 0;
}
