#include <stdio.h>

int main() {

    int arr[5][6] = {
        {10, 20, 30, 40, 50, 60},
        {1, 2, 3, 4, 0, 0},
        {7, 0, 0, 0, 0, 0},
        {1, 2, 3, 4, 5, 0},
        {1, 2, 3, 4, 5, 0}
    };

    int sizes[5] = {6, 4, 1, 5, 5};

    int start[5] = {1, 0, 0, 2, 0};
    int end[5] = {4, 3, 0, 4, 2};

    for (int t = 0; t < 5; t++) {

        int s = start[t];
        int e = end[t];

        while (s < e) {

            int temp = arr[t][s];
            arr[t][s] = arr[t][e];
            arr[t][e] = temp;

            s++;
            e--;
        }

        printf("Case %d: [", t + 1);

        for (int i = 0; i < sizes[t]; i++) {
            printf("%d", arr[t][i]);

            if (i < sizes[t] - 1) {
                printf(", ");
            }
        }

        printf("]\n");
    }

    return 0;
}