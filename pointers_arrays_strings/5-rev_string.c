#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char invierte = s[0];
	int contador = 0;
	int i;

	while (s[contador] != '\0')
	contador++;
	for (i = 0; i < contador; i++)
	{
		contador--;
		rev = s[i];
		s[i] = s[contador];
		s[contador] = rev;
	}
}
