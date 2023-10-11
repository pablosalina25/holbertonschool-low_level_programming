#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letra;
	int numero;

	for (letra = '0'; letra <= '9'; letra++)
		putchar(letra);
	for (numero = 'a'; numero <= 'f'; numero++)
		putchar(numero);
	putchar('\n');
	return (0);
}
