#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
			ptr = (int *) malloc(new_size);
	if (ptr == NULL)
	return (NULL);
	else
	return (ptr);
	}
	if (ptr == NULL)
	{
		return (ptr = (int *) malloc(new_size));

			if  (ptr == NULL)
				return (NULL);
	}
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
			return (NULL);
	}

	return (ptr);
}
