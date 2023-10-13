#include "main.h"
#include <ctype.h>
/**
 * void jack_bauer(void); a function that prints every minute of the day
 * @c starting from 00:00 to 23:59.
 * Return nothing
 */
void jack_bauer(void)
{
	int c;

	for (c = 0 ; c <= 23 ; c++)
	{
		_putchar(c);
	}
	_putchar ('\n');
	for (c = 0 ; c <= 59 ; c++)
	{
		_putchar(c);
	}
	_putchar ('\n');
	{
	_putchar(c);
	}
	_putchar ('\n');
}
