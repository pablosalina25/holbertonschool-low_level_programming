#include "main.h"
/**
 * print_alphabet_x10 prints 10 times the english alphabet in lowercase
 * Returning nothing
 */

void print_alphabet_x10(void)
{
	int a, c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		a = a * 9;
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
