#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
	int main(void)
{
	int numero;

	for (numero = '0'; numero <= '9'; numero++)
		putchar(numero);
		putchar(',');

	putchar('\n');
	return (0);
}
