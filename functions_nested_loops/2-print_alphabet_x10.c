#include "main.h"
/**
 * print_alphabet_x10 prints 10 times the english alphabet in lowercase
 * Returning nothing
 */

void print_alphabet_x10(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		for (c = '0' ; c <= '9'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
