#include <string.h>
#include <stdio.h>

int main() {
    char strings[10][24];
    int i;

    // read 10 strings from the user into an array
    for (i=0; i < 10; i++) {
        printf("String %d: ", i+1);
        scanf("%23s", &strings[i]);
    }

    // sum the length of all of the strings
    int sum = 0;
    for (i=0; i < 10; i++) {
        sum += strlen(strings[i]);
    }

    printf("Total length: %d\n", sum);
    return 0;
}
