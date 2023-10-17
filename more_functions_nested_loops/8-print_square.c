#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 *
 * If size is 0 or less, the function should print only a new line.
 */
void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (int i = 0; i < size; i++)
	{
	for (int j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
