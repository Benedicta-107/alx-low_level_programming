#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory.
 * @b: allocated memory.
 *
 * Return: a pointer to the memory.
 */

void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}

