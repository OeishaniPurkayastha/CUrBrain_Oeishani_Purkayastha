
#include <stdio.h>

int filterSales(int sales[], int n, int threshold, int result[]) {
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (sales[i] >= threshold) {
            result[k] = sales[i];
            k++;
        }
    }

    return k;
}

int main() {
    int sales1[] = {150, 80, 200, 90, 300};
    int result1[5];
    int k1 = filterSales(sales1, 5, 100, result1);

    for (int i = 0; i < k1; i++)
        printf("%d ", result1[i]);
    printf("\n");

    int sales2[] = {100, 50, 100};
    int result2[3];
    int k2 = filterSales(sales2, 3, 100, result2);

    for (int i = 0; i < k2; i++)
        printf("%d ", result2[i]);
    printf("\n");

    int result3[1];
    printf("%d\n", filterSales(NULL, 0, 50, result3));

    int sales4[] = {10, 20, 30};
    int result4[3];
    int k4 = filterSales(sales4, 3, 40, result4);

    for (int i = 0; i < k4; i++)
        printf("%d ", result4[i]);
    printf("\n");

    int sales5[] = {75, 75, 75};
    int result5[3];
    int k5 = filterSales(sales5, 3, 75, result5);

    for (int i = 0; i < k5; i++)
        printf("%d ", result5[i]);
    printf("\n");

    return 0;
}
