#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i;
    int root_n = (int)sqrt(n);

    /* cool thing: we only have to go up until the square root to check primality
     * for every divisor up to sqrt(n), check if the remainder is something other than 0
     * i.e. if something besides 1 divides evenly into n, it's not prime
     */
    for (i = 2; i < root_n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

// iterative solution
int fact(int n) {

    // edge case: 0! = 0
    if (n == 0) {
        return 0;
    }

    int result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

double myPow(x, y) {
    int result = x;

    // edge case: x = 0
    if (x == 0) {
        return 0;
    }

    // edge case: y = 0
    else if (y == 0) {
        return 1;
    }

    int i;
    for (i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

int numCircularIntersections(int x1, int y1, int r1, int x2, int y2, int r2) {
    // get euclidean distance
    int centerDistance = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));

    // too far away
    if (centerDistance > (double)(r1 + r2)) {
        return 0;
    }
    // touch at one point
    else if (centerDistance == (double)(r1 + r2)) {
        return 1;
    }
    // touch at two points
    else if (centerDistance < (double)(r1 + r2)) {
        return 2;
    }

    // unhandled - they are the same circle
}

void printRow(int stars, int width) {
    int numSpaces = (width-stars)/2;
    int i;
    // print spaces before
    for (i=0; i < numSpaces; i++) {
        putchar(' ');
    }
    for (i=0; i < stars; i++) {
        putchar('*');
    }
    putchar('\n');
}

void printDiamond(int n) {
    // don't even
    if (n < 1) {
        return;
    }
    int i;
    for (i=1; i <= n; i += 2) {
        printRow(i, n);
    }
    for (i=n-2; i >= 1; i -= 2) {
        printRow(i, n);
    }
}

int main() {
    puts("Primality tests");
    if (!isPrime(45093282)) {
        puts(" 45093282 is a composite number");
    }
    if (isPrime(1759)) {
        puts(" 1759 is a prime number");
    }

    puts("\nFactorial tests");
    if (fact(3) == 6)
        puts(" 3! == 6");
    if (fact(5) == 120)
        puts(" 5! == 120");


    puts("\nCircular intersection tests");
    if (numCircularIntersections(0, 0, 5, 20, 20, 5) == 0) {
        puts(" (0,0,5) does not intersect with (20, 20, 5)");
    }

    puts("");
    puts("79 star diamond");
    printDiamond(79);

    puts("7 star diamond");
    printDiamond(7);

    puts("1 star diamond");
    printDiamond(1);
    return 0;
}
