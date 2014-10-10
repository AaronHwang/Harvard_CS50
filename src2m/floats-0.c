/**
 * floats-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Tries to print 1/10 as a floating-point value.
 *
 * Demonstrates truncation.
 */

#include <stdio.h>

int main(void)
{
    float f = 1 / 10;
    printf("%.1f\n", f);
}
