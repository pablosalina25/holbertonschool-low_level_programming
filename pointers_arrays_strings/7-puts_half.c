#include "main.h"
/**
 * puts_half - Print second half of a string, followed by a new line.
 * @str: Input string.
 */
void puts_half(char *str)
{
	int longitud = 0;
	int inicio;

	while (str[longitud] != '\0')
	{
	longitud++;
	}
	if (longitud % 2 == 0)
	{
	inicio = longitud / 2;
	}
	else
	{
	inicio = (longitud - 1) / 2;
	}
	for (int i = inicio; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
