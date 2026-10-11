#include <stdio.h>
#include <stdlib.h>

int kthFactor(int n, int k)
{
    int factors[1000];
    int count = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            factors[count++] = i;

            if (i != n / i)
            {
                factors[count++] = n / i;
            }
        }
    }

    // Sort factors in ascending order
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (factors[i] > factors[j])
            {
                int temp = factors[i];
                factors[i] = factors[j];
                factors[j] = temp;
            }
        }
    }

    if (k > count)
        return -1;

    return factors[k - 1];
}

int main()
{
    printf("%d\n", kthFactor(12, 3));
    printf("%d\n", kthFactor(1, 1));
    printf("%d\n", kthFactor(12, 6));
    printf("%d\n", kthFactor(12, 7));
    printf("%d\n", kthFactor(36, 5));

    return 0;
}