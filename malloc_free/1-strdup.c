#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - Duplicates a string into a newly
 * allocated memory space.
 * @str: The input string to duplicate.
 * Return: A pointer to the duplicated string,
 * or NULL if allocation fails.
 */
char *_strdup(char *str)
{
	int longi = 0;

	if (str == NULL)
	return (NULL);

	while (str[longi] != '\0')
	longi++;

	char *copy = malloc(sizeof(char) * (longi + 1));

	if (copy == NULL)
	return (NULL);

	for (int i = 0; i <= longi; i++)
	copy[i] = str[i];
	return (copy);
}
