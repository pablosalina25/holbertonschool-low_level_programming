#include "main.h"
/**
 * print_alphabet - Prints the alphabet from a-z
 * Return nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
