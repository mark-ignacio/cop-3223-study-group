#include <stdio.h>

const int boxTwo[5][5] = {
    { 46, 86, 253, 138, 239 },
    { 4, 53, 434, 53, 65 },
    { 233, 241, 122, 201, 23 },
    { 71, 119, 223, 74, 158 },
    { 243, 24, 122, 169, 45 }
};

int main() {

    int maximum = -1, minimum = -1;
    int i, j;

    // row
    for (i = 0; i < 5; i++) {

        // column
        for (j = 0; j < 5; j++) {
            int currentNum = boxTwo[i][j];
            if (maximum < currentNum || maximum == -1) {
                maximum = currentNum;
            }
            if (minimum > currentNum || minimum == -1) {
                minimum = currentNum;
            }
        }
    }

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}
