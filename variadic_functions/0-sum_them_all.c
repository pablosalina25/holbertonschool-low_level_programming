#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns
 * the sum of all its parameters.
 * @n: n
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int arg_count = 0;
	int total_sum = 0;
	va_list ptrs;

	va_start(ptrs, n);

	while (arg_count < n)
	{
	total_sum += va_arg(ptrs, int);
	arg_count++;
	}
	va_end(ptrs);
	return (total_sum);
}
