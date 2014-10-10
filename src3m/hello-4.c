/**
 * hello-4.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Says hello to argv[1].
 *
 * Demonstrates a non-0 return value from main.
 */
       
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
        return 0;
    }
    else
    {
        return 1;
    }
}
