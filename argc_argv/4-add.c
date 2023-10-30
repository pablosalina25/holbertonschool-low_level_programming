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
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (int i = 1; i < argc; i++)
	{
	for (int j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
