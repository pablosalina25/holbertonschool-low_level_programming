#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int longitud = 0;

	while (s[longitud] != '\0')
	{
	longitud++;
	}
	int inicio = 0;
	int fin = longitud - 1;

	while (inicio < fin)
	{
	char temp = s[inicio];

	s[inicio] = s[fin];
	s[fin] = temp;
	inicio++;
	fin--;
	}
}
