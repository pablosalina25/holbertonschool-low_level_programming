#include "main.h"

/**
 * leet - Encodes a string into 1337speak.
 * @n: Input string to be encoded
 * Return: Encoded string
 */
char *leet(char *n)
{
	int im = 0;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (n[im] != '\0')
	{
	int j = 0;

	while (j < 10)
	{
	if (n[im] == s1[j])
	{
		n[im] = s2[j];
	}
	j++;
	}
	im++;
	}
	return (n);
}
