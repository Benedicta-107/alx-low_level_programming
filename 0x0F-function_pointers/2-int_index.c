#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array of integers
 * @size:  number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
