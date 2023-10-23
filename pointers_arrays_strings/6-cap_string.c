#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 */
char *cap_string(char *str)
{
	int index = 0;
	int capitalize_next = 1;

	while (str[index])
	{
	if (isspace((unsigned char)str[index]) || ispunct((unsigned char)str[index]))
	{
	capitalize_next = 1;
	}
	else if (capitalize_next)
	{
	str[index] = toupper((unsigned char)str[index]);
	capitalize_next = 0;
	}
	else
	{
	str[index] = tolower((unsigned char)str[index]);
	}
	index++;
	}
	return (str);
}
