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

	for (letra = 'a'; letra <= 'f'; letra++)
		putchar(letra);
	for (numero = '0'; numero <= '9'; numero++)
		putchar(numero);
	putchar('\n');
	return (0);
}
