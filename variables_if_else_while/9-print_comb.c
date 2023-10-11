#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
	int main(void)
{
	int numero;

	for (numero = 48; numero <= 57; numero++)
		putchar(numero);
		putchar(',');

	putchar('\n');
	return (0);
}
