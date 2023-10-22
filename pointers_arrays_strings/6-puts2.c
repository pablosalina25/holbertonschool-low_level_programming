#include "main.h"
#include <stdio.h>

/**
 * puts2 - Imprime cada 2do carácter de una cadena,
 * empezando por el primer carácter.
 * @str: La cadena de entrada.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	{
	putchar(str[i]);
	}
	i++;
	}
	putchar('\n');
}
