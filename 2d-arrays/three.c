#include <stdio.h>

// 3. Write a program that adds the values of 2 2D arrays of the same size into an a new 2D array

const int boxOne[5][5] = {
    { 178, 244, 252, 254, 79 },
    { 49, 187, 35, 13, 54 },
    { 168, 42, 229, 206, 79 },
    { 145, 193, 146, 161, 158 },
    { 110, 176, 213, 238, 31 }
};

const int boxTwo[5][5] = {
    { 46, 86, 253, 138, 239 },
    { 4, 53, 434, 53, 65 },
    { 233, 241, 122, 201, 23 },
    { 71, 119, 223, 74, 158 },
    { 243, 24, 122, 169, 45 }
};

int main() {
    int sumBox[5][5];
    int i,j;
    for (i=0; i < 5; i++) {
        for (j=0; j < 5; j++) {
            sumBox[i][j] = boxOne[i][j] + boxTwo[i][j];
        }
    }
    puts("sumBox = {");
    for (i=0; i < 5; i++) {
        printf(" {%d, %d, %d, %d, %d},\n",
               boxOne[i][0], boxOne[i][1], boxOne[i][2], boxOne[i][3], boxOne[i][4]);
    }
    puts("}");

    return 0;
}
