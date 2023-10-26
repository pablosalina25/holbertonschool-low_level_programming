#include "main.h"
#include <stddef.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: The string to be searched in.
 * @needle: The substring to be located.
 *
 * Return: a pointer to the beginning of the located
 * substring, or NULL if not found.
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
	if (*pim == '\0')
	return (haystack);
	haystack++;
	}
	return (NULL);
}
