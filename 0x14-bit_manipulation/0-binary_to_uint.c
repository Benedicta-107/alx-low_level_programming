#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function to convert binary num to unsigned int.
 * @b: pointer pointing to a string of characters.
 *
 * Return: the converted num, or 0 if there is 1/more string or b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			num = (num << 1);
		} else if (b[i] == '1')
		{
			num = (num << 1) | 1;
		} else
		{
			return (0);
		}
	}

	return (num);
}
