#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300
    floating-point version, with a heading as per 1-3 */
int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      // lower limit
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;

    printf("%10s %8s\n", "FAHRENHEIT", "CELSIUS");
    while (fahr <= upper) {
        celsius = 5.0/9.0 * (fahr - 32.0);
        printf("%10.0f %8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}