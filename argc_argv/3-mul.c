#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string|
 **/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	int numero1 = atoi(argv[1]);
	int numero2 = atoi(argv[2]);
	int resultado = numero1 * numero2;

	printf("%d\n", resultado);
	return (0);
}
