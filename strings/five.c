#include <string.h>
#include <stdio.h>

int main() {
    char name[24];

    // strlen("Hello ") == 6
    char greeting[24+6];
    printf("Please input your name: ");
    scanf("%23s", name);

    // we need to copy because greeting is blank
    strcpy(greeting, "Hello ");
    strcat(greeting, name);
    puts(greeting);
    return 0;
}
