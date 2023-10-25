#include "main.h"
#include <stddef.h>

/** _strstr - locates a substring.
 * Return: a pointer to the beginning of the located
 *  substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	if (!haystack || !needle)
	{
	return (NULL);
	}
	while (*haystack)
	{
	char *hays = haystack;
	char *need = needle;

	while (*need && *hays == *need
		{
	hays++;
	need++;
	}
	if (*need == '\0') 
	{
	return (haystack);
	}
	haystack++;
	}
	return (NULL);
}
