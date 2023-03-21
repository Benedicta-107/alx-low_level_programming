#include "main.h"

/**
 * malloc_checked - function to allocate memory.
 * @b: allocated memory or the unsigned integer.
 *
 * Return: a pointer to the memory.
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}

