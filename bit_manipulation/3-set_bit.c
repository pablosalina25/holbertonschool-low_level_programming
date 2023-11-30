#include "main.h"

/**
 * set_bit - A function that
 * sets the value of a bit to 1 at a given index.
 * @n: Pointer to an unsigned long.
 * @index: Index of the bit to set.
 * Return: 1 if it worked, -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
	return (-1);

	unsigned long int mask = 1 << index;
	*n = *n + mask;

	return (1);
}
