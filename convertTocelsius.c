/*
Name : Domini Muthomi
REG NO : CT101/G/26556/25
DATE : 23/10/10125
DESCRIPTION : Converting to celcius
*/

#include <stdio.h>

double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(void) {
    double f;
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &f) != 1) return 1;
    double c = convertToCelsius(f);
    printf("%.2f°F = %.2f°C\n", f, c);
    return 0;
}