#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 *
 * Return: If n is 0 or less, the function should only print \n
 */
void print_diagonal(int n)
{
	int i, j;
	if (n <= 0)
	{
	_putchar('\n');
	return;
	}
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar('\');
	_putchar('\n');
	}
	}
}
