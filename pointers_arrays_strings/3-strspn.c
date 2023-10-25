#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input
 * @accept: consist only of bytes
 * Return: Always o (Sucess)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int na = 0;
	int rom;

	while (*s)
	{
		for (rom = 0; accept[rom]; rom++)
		{
			if (*s == accept[rom])
			{
				na++;
				break;
			}
			else if (accept[rom + 1] == '\0')
				return (na);
		}
		s++;
	}
	return (na);
}
