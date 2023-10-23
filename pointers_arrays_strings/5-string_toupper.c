#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int inter;

	inter = 0;
	while (n[inter] != '\0')
	{
		if (n[inter] >= 'a' && n[inter] <= 'z')
		n[inter] = n[inter] - 32;
		inter++;
	}
	return (n);
}
