#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pol = NULL;
	unsigned int z = 0;
	unsigned int k = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[z] != '\0')
	z++;
	while (s2[k] != '\0')
	k++;
	if (n >= k)
	n = k;

	pol = malloc(z + n + 1);

	if (pol == NULL)
	return (NULL);

	z = 0;
	while (s1[z] != '\0')
	{
	pol[z] = s1[z];
	z++;
	}
	k = 0;
	while (k != n)
	{
	pol[z] = s2[k];
	z++;
	k++;
	}
	pol[z] = '\0';
	return (pol);
}
