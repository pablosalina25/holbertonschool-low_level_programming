#include "main.h"
/** puts_half(char *str) - a function that prints half of a string,
 *  followed by a new line.
 * @str: la cadena de entrada
 */

void puts_half(char *str)
{
	int longitud = 0;

	while (str[longitud] != '\0')
	{
	longitud++;
	}
	int n = longitud / 2;

	if (longitud % 2 != 0)
	{
 	n++;
	}
	while (str[n] != '\0') 
	{
	_putchar(str[n]);
	n++;
	}
	_putchar('\n');
}
