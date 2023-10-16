#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: the number of times the character '\' should be printed
 *
 * Return: If n is 0 or less, the function should only print a newline.
 */
void print_diagonal(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar(92);
		}
	}
	_putchar('\n');
}
