/****************************************************************************
 * buggy-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Should print 10 asterisks but doesn't!
 ***************************************************************************/

#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 10; i++)
        printf("*");
}
