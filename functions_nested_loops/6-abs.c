#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the absolute value of an integer.
 * @r: The integer to calculate the absolute value for.
 *
 * Return: The absolute value of 'r'.
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
