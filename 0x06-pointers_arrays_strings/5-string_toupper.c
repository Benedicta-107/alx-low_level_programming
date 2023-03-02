#include"main.h"
/**
 * string_toupper - function to change string to uppercase
 * @a: pointer a
 *
 * Return: returns the  pointer a
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] > 90 && a[i] != 10)
	{
		a[i] = a[i] - 32;
	}
	}
	return (a);
}
