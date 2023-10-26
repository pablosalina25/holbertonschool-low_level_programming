#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: The input string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
	length++;
	}
	return (length);
}
