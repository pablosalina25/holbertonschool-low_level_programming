#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mom;

	for (mom = 0; mom < argc; mom++)
	{
		printf("%s\n", argv[mom]);
	}
	return (0);
}
