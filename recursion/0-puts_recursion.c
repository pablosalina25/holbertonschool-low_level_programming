#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line.
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	{
	putchar('\n');
	}
}
