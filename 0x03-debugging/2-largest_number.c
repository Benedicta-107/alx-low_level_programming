#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main (void)
{
    int a = 972, b = -98, c = 0;

    if (a > b && b > c)
    {
        printf("a is largest");
    }
    else if (b > a && a > c)
    {
        printf("b is largest");
    }
    else
    {
        printf("c is largest");
    }

    return (0);
}
