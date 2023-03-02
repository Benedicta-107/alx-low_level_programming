#include "main.h"
#include <stdio.h>

/**
 * _strncat- function that concatenates two strings.
 *
 * @src: source string .
 * @dest: the destination string.
 * @n: number of bytes from src
 * strncpy: copy the string
 * Return:  dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	if(a < n)
	{
		for (; a < n; a++)

		dest[a] = '\0';


	}
	return (dest);
}
