#include "main.h"

/**
 * flip_bits - function to get number to be flipped.
 * @n: a number.
 * @m: a number to flip to m.
 *
 * Return: the flipped number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, num = 0;

	while (x != 0)
	{
		num += (x & 1);
		x >>= 1;
	}

	return (num);
}
