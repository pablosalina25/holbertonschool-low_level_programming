#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to find the absolute value of.
 *
 * Return: The absolute value of 'n'.
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
}