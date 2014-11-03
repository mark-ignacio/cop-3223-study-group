#include <stdio.h>

/*
Good questions to ask:
    1. Is zero an even index?
    2. Even indices in the array are {0,2,4...}?
    3. When we print out spots, do we count from #1? Are the even indices then actually spots {1,3,5,7,9}?
 */


int main() {
    // enter in 10 numbers
    int numbers[10];
    int i;
    for (i = 0; i < 10; ++i) {
        printf("Input #%d: ", i);
        scanf("%d", &numbers[i]);
    }

    // print out values in even indices
    for (i=0; i < 10; i += 2) {
        printf("Number #%d: %d\n", i, numbers[i]);
    }

    return 0;
}