#include <stdio.h>

const int colMagicArray[3][3] = {
    {3, 5, 8},
    {5, 8, 3},
    {8, 3, 5}
};

// 5. Write a program that checks if a 2D array is column-magic.
//    The 2D array is column magic if the sum of each column is the same.
int main() {
    int runningSum = 0, currentSum = 0;
    int i,j;

    int firstTime = 1;
    // i for columns, j for rows
    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            currentSum += colMagicArray[j][i];
        }

        if (firstTime) {
            runningSum = currentSum;
            currentSum = 0;
            firstTime = 0;
        }
        else if (runningSum != currentSum) {
            puts("Not column-magic!");
            return 0;
        }
        else {
            runningSum = currentSum;
            currentSum = 0;
        }
    }

    puts("The 2D array is column-magic.");
    return 0;
}
