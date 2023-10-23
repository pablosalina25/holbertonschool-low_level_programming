#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 */
char *cap_string(char *str)
{
	int ine = 0;

	while (str[ine])
	{
	if (ine == 0 || isspace(str[ine - 1]) || ispunct(str[ine - 1]))
	str[ine] = toupper((unsigned char)str[ine]);
	else
	str[ine] = tolower((unsigned char)str[ine]);
	ine++;
	}
	return (str);
}
