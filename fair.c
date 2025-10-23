/*
Name : Dominic Muthomi
REG NO : CT101/G/26556/25
Date :23/10/2025
Description : fair calculation
*/

#include <stdio.h>

long calculateFare(long distanceKm) {
    if (distanceKm <= 0) return 0;
    return distanceKm * 50L;
}

int main(void) {
    long km;
    printf("Enter distance travelled (km): ");
    if (scanf("%ld", &km) != 1) return 1;
    long fare = calculateFare(km);
    printf("Total fare for %ld km = KSh. %ld\n", km, fare);
    return 0;
}