#include <stdio.h>

/* copying input to output, replacing tabs with \t, backspaces with \b and backlashes with \\
    used in bash as cat (file) | ./a */
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\b') {
            printf("\b");
        } else if (c == '\t') {
            printf("\\t");
        } else if (c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }
}