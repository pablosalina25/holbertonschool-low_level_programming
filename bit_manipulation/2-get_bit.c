#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a specific index.
 * @n: Number to evaluate.
 * @index: Index (starting from 0) of the bit to get.
 * Return: The value of the bit at the given index, or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted_n;

	if (index > 64)
		return (-1);

	shifted_n = n >> index;
	return (shifted_n & 1);
}
