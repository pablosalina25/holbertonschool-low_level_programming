#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: First string to compare
 * @s2: Second string to compare
 * Return: 0 if equal, 1 if s1 > s2, -1 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
	if (*s1 > *s2)
	{
	return (1);
	}
	else
	{
	return (-1);
	}
	}
	s1++;
	s2++;
	}
	return (0);
}
