#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specified index.
 * @num: Number to evaluate.
 * @idx: Index (starting from 0) of the bit to retrieve.
 * Return: The value of the bit at the given index, or -1 on error.
 */
int get_bit(unsigned long int num, unsigned int idx)
{
	unsigned long int shiftedNum;

	if (idx > 64)
		return (-1);

	shiftedNum = num >> idx;
	return (shiftedNum & 1);
}
