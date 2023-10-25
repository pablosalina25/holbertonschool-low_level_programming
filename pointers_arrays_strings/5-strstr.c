#include "main.h"
#include <stddef.h>

/**
 * _strstr - a function that locates a substring.
 * @str: The string to be capitalized.
 *
 * Return:a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *lim = haystack;
	char *pim = needle;

	while (*lim == *pim && *pim != '\0')
	{
	lim++;
	pim++;
	}
	if (*p == '\0')
	return (haystack);
	haystack++;
	}
	return (NULL);
}
