#include <stdio.h>

int main() {
    // creates array with values
    int values[] = {79, 85, 92, 89, 95, 84};

    // give average
    int i;
    int sum = 0;
    for (i = 0; i < 6; ++i) {
        sum += values[i];
    }

    // gotcha: dividing by an integer will not give you the right number!
    // divide by a floating point version of the length
    printf("Sum: %f\n", sum / 6.0);

    return 0;
}
