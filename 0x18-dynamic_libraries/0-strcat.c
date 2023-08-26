#include "main.h"
#include <stdio.h>

/**
 * function- that concatenates two strings.
 *
 * @src: string to append to the destination string.
 * @dest: the destination string.
 * strcat: concatenates the string
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	/*dest[a] = '\0';*/

	return (dest);
}
