#include"main.h"
/**
 * _strstr - Function  to locate a substring
 * @needle: the occurance to find
 * @haystack: the string to search for
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
	char *src = haystack;
	char *sub = needle;

	while (*haystack && *sub && *haystack == *sub)
	{
		haystack++;
		sub++;
	}
	if (!*sub)
	return (src);
	haystack = src + 1;
	}
return (0);
}
