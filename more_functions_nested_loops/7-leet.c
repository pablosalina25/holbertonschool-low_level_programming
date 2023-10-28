#include "main.h"

/**
 * print_chessboard - a function that
 * encodes a string into 1337.
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int in = 0;
	int ja;

	while (in < 8)
	{
	ja = 0;
	while (ja < 8)
	{
	_putchar(a[in][ja]);
	ja++;
	}
	_putchar('\n');
	in++;
	}
}
