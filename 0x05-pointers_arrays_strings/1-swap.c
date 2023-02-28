#include "main.h"

/**
 * swap_int - swaps the values of int a and int b
 * @a: first int to be swaped
 * @b: second int to be swaped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int d;

	 d = *a;
	*a = *b;
	*b = d;
}
