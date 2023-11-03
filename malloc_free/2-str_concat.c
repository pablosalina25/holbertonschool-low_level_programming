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
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[len1])
	len1++;
	while (s2[len2])
	len2++;

	char *concatenated = malloc(len1 + len2 + 1);

	if (concatenated == NULL)

	return (NULL);

	for (int i = 0; i < len1; i++)
	{
	concatenated[i] = s1[i];
	}
	for (int i = 0; i < len2; i++)
	{
	concatenated[len1 + i] = s2[i];
	}
	concatenated[len1 + len2] = '\0';

	return (concatenated);
}
