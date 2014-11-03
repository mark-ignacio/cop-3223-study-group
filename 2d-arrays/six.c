#include <stdio.h>

int main() {

    int num_days, startDay;
    printf("Days in the month: ");
    scanf("%d", &num_days);
    printf("Starting week day (1-7): ");
    scanf("%d", &startDay);

    // make it zero indexed
    startDay--;


    // pad dat
    int i;
    puts(" ---------------------------------- ");
    for (i=0; i < startDay; i++ ) {
        printf("|    ");
    }

    int dow = startDay;
    for (i=0; i < num_days; i++) {
        int date = i+1;
        if (dow == 6) {
            printf("| %2d |\n", date);
        }
        else {
            printf("| %2d ", date);
        }
        dow = (dow + 1) % 7;
    }

    if (dow != 0) {
        for (i=dow; i < 7; i++) {
            if (i == 6) {
                printf("|    |\n");
            }
            else {
                printf("|    ");
            }
        }
    }

    puts(" ---------------------------------- ");
    return 0;
}
