#include <string.h>
#include <stdio.h>

int main() {
    char s1[21], s2[21], s3[21];
    puts("Input three strings!");

    printf("One: ");
    scanf("%20s", s1);

    printf("Two: ");
    scanf("%20s", s2);

    printf("Three: ");
    scanf("%20s", s3);

    // space it out a bit
    puts("");
    if (strcasecmp(s1, s2) == 0 ||
        strcasecmp(s1, s3) == 0 ||
        strcasecmp(s2, s3) == 0 ) {
        puts("Two strings are identical!");
    }
    else {
        puts("No two strings are identical");
    }
    return 0;
}
