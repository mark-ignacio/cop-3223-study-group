#include <stdio.h>

int main () {
    // enter the 10 numbers into two arrays
    int first_five[5];
    int second_five[5];
    int i;
    for (i = 0; i < 5; ++i) {
        printf("Input #%d: ", i);
        scanf("%d", &first_five[i]);
    }

    for (i = 0; i < 5; ++i) {
        printf("Input #%d: ", i+5);
        scanf("%d", &second_five[i]);
    }

    // check that the two are equal
    int same = 1;
    for (i = 0; i < 5; ++i) {
        if (first_five[i] != second_five[i]) {
            same = 0;
            break;
        }
    }
    if (same) {
        puts("The two arrays are the same!");
    }
    else {
        puts("The two arrays are different.");
    }
    return 0;
}
