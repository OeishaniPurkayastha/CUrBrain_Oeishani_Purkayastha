#include <stdio.h>

int subtractProductAndSum(int n)
{
    int sum = 0;
    int product = 1;

    while (n > 0)
    {
        int digit = n % 10;

        sum = sum + digit;
        product = product * digit;

        n = n / 10;
    }

    return product - sum;
}

int main()
{
    int testCases[] = {234, 123, 5, 100, 999};

    for (int i = 0; i < 5; i++)
    {
        int n = testCases[i];
        int result = subtractProductAndSum(n);

        int temp = n;
        int sum = 0;
        int product = 1;

        while (temp > 0)
        {
            int digit = temp % 10;

            sum = sum + digit;
            product = product * digit;

            temp = temp / 10;
        }

        printf("Input: %d\n", n);
        printf("Output: %d\n", result);
        printf("Product = %d; Sum = %d; %d - %d = %d\n\n", product, sum, product, sum, result);
    }

    return 0;
}