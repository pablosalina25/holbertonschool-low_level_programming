#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int indice = 0;
	int es_mayus = 1;

	while (str[indice])
	{
	if (es_mayus && str[indice] >= 'a' && str[indice] <= 'z')
	{
	str[indice] -= 32;
	es_mayus = 0;
	}
	else if (str[indice] == ' ' || str[indice] == '\t' || str[indice] == '\n' ||
		str[indice] == ',' || str[indice] == ';' || str[indice == '.' ||
		str[indice] == '!' || str[indice] == '?' || str[indice] == '"' ||
		str[indice] == '(' || str[indice] == ')' || str[indice] == '{' ||
		str[indice] == '}'])
	{
	es_mayus = 1;
	}
	else
	{
	es_mayus = 0;
	}
	indice++;
	}
	return (str);
}
