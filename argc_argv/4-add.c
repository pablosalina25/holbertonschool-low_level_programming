#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int suma = 0;
	int a, b;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (a = 1; a < argc; a++)
	{
	for (b = 0; argv[a][b] != '\0'; b++)
	{
	if (!isdigit(argv[a][b]))
	{
		printf("Error\n");
		return (1);
	}
	}
	suma += atoi(argv[a]);
	}
	printf("%d\n", suma);
	return (0);
}
