#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers.
 * @separator: separator
 * @n: n
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int index;
	int num;

	va_start(list, n);

	if (n == 0)
	{
	printf("\n");
	va_end(list);
	return;
	}
	num = va_arg(list, int);
	printf("%d", num);
	index = 1;
	while (index < n)
	{
	if (!separator)
	printf("%d", va_arg(list, int));
	else
	printf("%s%d", separator, va_arg(list, int));
	index++;
	}
	va_end(list);
	printf("\n");
}
