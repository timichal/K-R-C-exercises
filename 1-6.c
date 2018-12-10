#include <stdio.h>

/* copy input to output; 2nd version */
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);

        // operator precedence as per 1.6
        // verify that getchar() != EOF is 0/1
        printf(" %d ", getchar() != EOF);
    }
}