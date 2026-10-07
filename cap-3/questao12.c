#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit, kelvin;

    printf(" Celsius | Fahrenheit | Kelvin\n");
    printf("--------------------------------\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;

        printf("%8d | %10.2f | %6.2f\n",
               celsius, fahrenheit, kelvin);
    }

    return 0;
}