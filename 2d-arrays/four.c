#include <stdio.h>

const int magicRowArray[3][5] = {
    { 1, 2, 3, 4, 5 },
    { 9, 3, 0, 1, 2 },
    { 7, -5, 2, 12, -1 }
};

int main() {
    // verifies that it's... row-magic...
    int i, j;
    int firstTime = 1;
    int runningSum = 0, currentSum = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            currentSum += magicRowArray[i][j];
        }
        printf("Row sum: %d\n", currentSum);

        // don't check the row the first time around
        if (firstTime) {
            runningSum = currentSum;
            currentSum = 0;
            firstTime = 0;
        }
        else if (runningSum != currentSum) {
            puts("Not row-magic!");
            return 0;
        }
        else {
            runningSum = currentSum;
            currentSum = 0;
        }
    }

    puts("The 2D array is row-magic.");
    return 0;
}
