#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;
	char *concatenated;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1])
	len1++;
	while (s2[len2])
	len2++;

	concatenated = malloc(len1 + len2 + 1);
	if (concatenated == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	{
	concatenated[i] = s1[i];
	}
	for (int j = 0; j < len2; j++)
	{
	concatenated[i] = s2[j];
	i++;
	}
	concatenated[i] = '\0';

	return (concatenated);
}
