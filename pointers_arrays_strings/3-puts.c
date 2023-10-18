#include "main.h"
#include <stdio.h>

/**
 * void _puts - a function that prints a string.
 * @str: The input string
 * Return: the string
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
	length++;
	}
	puts(str);
}
