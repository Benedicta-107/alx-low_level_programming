#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that gets the value of a bit at a given index.
 * @n: The value of the bit.
 * @index: the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	value <<= index;
	if (n & value)
		return (1);
	else
		return (0);
}
