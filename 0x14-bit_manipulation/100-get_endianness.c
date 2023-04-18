#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function to get the endianess of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int end = 1;

	char *ptr = (char *)&end;

	if (*ptr == 1)
	{
		return (1);
	}
	{
		return (0);
	}
}
