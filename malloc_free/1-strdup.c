#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string into
 *  a newly allocated memory space.
 * @str: The input string to duplicate.
 * Return: A pointer to the duplicated string,
 *  or NULL if allocation fails.
 */
char *_strdup(char *str)
{
	char *copy;
	int longit = 0;
	int i;

	if (str == NULL)
	return (NULL);
	while (str[longit] != '\0')
	longit++;
	copy = (char *)malloc(sizeof(char) * (longit + 1));
	if (copy == NULL)
	return (NULL);
	for (i = 0; i <= longit; i++)
	copy[i] = str[i];
	return (copy);
}
