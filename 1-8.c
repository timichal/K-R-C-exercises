#include <stdio.h>

/* count lines, tabs and blanks in input
    used in bash as cat (file) | ./a */

int main() {
    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            ++nl;
        }
    }

    printf("%d\n", nl);
}