#include <stdio.h>
#include "main.h"
/**
 * int _islower - checks for lowercase character.
 * Returns 1 c is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
