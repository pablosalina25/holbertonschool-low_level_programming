#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
		int print_last_digit(int n)
{
		int r = n % 10;
		_putchar('0' + r);

		return (r);
}
