#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int numero1 = atoi(argv[1]);
	int numero2 = atoi(argv[2]);
	int resultado = numero1 * numero2;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	printf("%d\n", resultado);
	return (0);
}
