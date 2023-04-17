#include <stdio.h>
#include "main.h"

/**
 * print_binary - function to print the binary rep of a num.
 * @n: an unsigned long integer.
 */

void print_binary(unsigned long int n)
{
	unsigned long int rep = 1UL << (sizeof(unsigned long int)  * 8 - 1);

	while (rep > 0)
	{
		if (n & rep)
		{
			printf("1");
		} else
		{
			printf("0");
		}
		rep >>= 1;
	}
}
