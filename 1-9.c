#include <stdio.h>

/* copying input to output, replacing one or more blanks by a single blank
    used in bash as cat (file) | ./a */
int main() {
    int c, blanks;
    blanks = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && blanks == 0) {
            putchar(c);
            blanks = 1;
        } else if (c == ' ' && blanks == 1) {
        } else {
            putchar(c);
            blanks = 0;
        }
    }
}