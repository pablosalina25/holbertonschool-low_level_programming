#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long integer to be modified.
 * @index: Index of the bit to be cleared.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	unsigned long int bitmask = 1UL << index;
	*n &= ~bitmask;

	return (1);
}

