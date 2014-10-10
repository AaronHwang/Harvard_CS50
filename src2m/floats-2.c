/**
 * floats-2.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints 1/10 as a floating-point value to 28 decimal places.
 *
 * Demonstrates imprecision of floating-point values.
 */

#include <stdio.h>

int main(void)
{
    float f = 1.0 / 10.0;
    printf("%.28f\n", f);
}
