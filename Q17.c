#include <stdio.h>

int main() {
    int testCases[5][8] = {
        {101, 103, 101, 102, 103, 105, 101, 103},
        {5, 5, 5, 2, 2, 2, 2},
        {99},
        {-2, -2, -2, 3, 3, 0},
        {4, 1, 4, 1, 7}
    };

    int sizes[5] = {8, 7, 1, 6, 5};

    for (int t = 0; t < 5; t++) {

        int maxFreq = 0;
        int ans = testCases[t][0];

        for (int i = 0; i < sizes[t]; i++) {

            int count = 0;

            for (int j = 0; j < sizes[t]; j++) {
                if (testCases[t][i] == testCases[t][j]) {
                    count++;
                }
            }

            if (count > maxFreq ||
               (count == maxFreq && testCases[t][i] < ans)) {
                maxFreq = count;
                ans = testCases[t][i];
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}