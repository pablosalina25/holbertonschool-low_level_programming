#include "main.h"

/**
 * Write a function that checks for uppercase
 * character
 * Prototype: int _isupper(int c)
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
