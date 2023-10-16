#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: the number of times the character '\' should be printed
 *
 * Return: If n is 0 or less, the function should only print a newline.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
	
	for (j = 0; j <n; j++)
			{
			_putchar('\n');
			}
			}
			}

