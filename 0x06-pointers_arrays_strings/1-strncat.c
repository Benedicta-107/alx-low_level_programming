#include "main.h"
#include <stdio.h>

/**
 * _strncat- function that concatenates two strings.
 *
 * @src: string to append to the destination string.
 * @dest: the destination string.
 * @n: number of bytes from src
 * strcat: concatenates the string
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (src[b] != '\0' && b < n)
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';

	return (dest);
}
