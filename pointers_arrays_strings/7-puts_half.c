#include "main.h"

/**
 * puts_half - Imprime la segunda mitad de una cadena
 * @str: La cadena de entrada.
 */
void puts_half(char *str)
{
	int longitud = 0;
	int inicio, i;

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
	for (i = inicio; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
