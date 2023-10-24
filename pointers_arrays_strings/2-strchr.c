#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate character in string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: Pointer to the first occurrence of the character in the string,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	return (NULL);
}
