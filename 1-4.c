#include <stdio.h>

/* print Celsius-Fahrenheit (as per 1-4) table
    for fahr = 0, 20, ..., 300
    floating-point version, with a heading as per 1-3 */
int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = -30;    // lower limit
    upper = 50;    // upper limit
    step = 5;      // step size

    celsius = lower;

    printf("%8s %11s\n", "CELSIUS", "FAHRENHEIT");
    while (celsius <= upper) {
        // remembering basic math!
        // celsius = 5 / 9 * (fahr - 32)
        // celsius * 9 / 5 = fahr - 32
        // (celsius * 9 / 5) + 32 = fahr
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%8.0f %11.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}