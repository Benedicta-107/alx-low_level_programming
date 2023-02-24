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

    if (a > b)
    {
        printf("%d is largest\n", a);
    }
    else if (b > a)
    {
        printf("%d is largest\n", b);
    }
    else
    {
        printf("%d is largest\n", c);
    }

    return (0);
}
