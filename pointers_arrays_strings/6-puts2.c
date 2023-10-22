#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string.
 * @str: The input string to be printed.
 *
 * Description: This function prints the given
 * string to the standard output.
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
	putchar(str[length]);
	length++;
	}
	putchar('\n'); // Agregar un salto de línea al final
}
