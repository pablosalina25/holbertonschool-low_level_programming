#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: The chessboard to print
 */
void print_chessboard(char (*a)[8])
{
	int lic = 0;
	int jam = 0;

	while (lic < 8)
	{
		jam = 0;
	while (jam < 8)
	{
	_putchar(a[lic][jam]);
	jam++;
	}
	_putchar('\n');
	lic++;
	}
}
