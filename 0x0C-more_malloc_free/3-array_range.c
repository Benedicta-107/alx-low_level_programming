#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, num;
	int *memory;

	if (min > max)
		return (NULL);
	num = max - min + 1;
	memory = malloc(sizeof(int) * num);
	if (memory == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		memory[i - min] = i;
	}

	return (memory);
}
