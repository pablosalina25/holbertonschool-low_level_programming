#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * int _isupper(int c) - checks for uppercase character.
 * @c: the character to be checked
 * Returns 1 if c is uppercase Returns 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 65 && c >= 90)

		return (0);
	else
		return (1);
}
