/**
 * positive.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Demands that user provide a positive integer.
 *
 * Demonstrates use of do-while.
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // loop until user provides a positive integer
    int n;
    do
    {
        printf("Please give me a positive int: ");
        n = GetInt();
    }
    while (n < 1);
    printf("Thanks for the positive int!\n", n);
}
