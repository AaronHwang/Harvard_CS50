/**
 * sizeof.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Reports the sizes of C's data types.
 *
 * Demonstrates use of sizeof.
 */

#include <stdio.h>

int main(void)
{
    // some sample variables 
    char c;
    double d;
    float f;
    int i;

    // report the sizes of variables' types
    printf("char: %i\n", sizeof(c));
    printf("double: %i\n", sizeof(d));
    printf("float: %i\n", sizeof(f));
    printf("int: %i\n", sizeof(i));
}
