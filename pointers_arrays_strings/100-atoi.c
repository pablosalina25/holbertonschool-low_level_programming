#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int n = 0;
	int signo = 1;

	while (*s)
	{
		if (*s == '-')
		{
			signo = -signo;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + (*s - '0') * signo;
		}
		else if (n != 0)
		{
			break;
		}
		s++;
	}
	return (n);
}
