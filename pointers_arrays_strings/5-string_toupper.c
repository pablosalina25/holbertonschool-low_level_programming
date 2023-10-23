#include "main.h"
#include  <stddef.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to convert.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	if (str == NULL)
	return (NULL);

	for (int i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
	}
	return (str);
}
