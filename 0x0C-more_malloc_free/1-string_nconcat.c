#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The destination string.
 * @s2: The concatenated string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + size1) != '\0')
		size1++;
	while (*(s2 + size2) != '\0')
		size2++;

	if (size2 >= n)
		size2 = n;
	concat = malloc(size1 + n + 1);
	if (concat == NULL)
		return (concat);
	for (i = 0; i < size1; i++)
		concat[i] = s1[i];

	for (i = 0; i < n; i++)
		concat[i + size1] = s2[i];

	concat[size1 + i] = '\0';
	return (concat);
}
