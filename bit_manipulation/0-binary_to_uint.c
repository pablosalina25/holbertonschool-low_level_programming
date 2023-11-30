#include "main.h"
/**
 * binary_to_uint - Converts a binary number represented as a string to an
 * unsigned integer.
 * @b: Pointer to the string containing the binary number.
 * Return: The decimal equivalent of the binary number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int idx = 0;

	if (!b)
		return (0);

	while (b[idx] != '\0')
	{
		if (b[idx] == '1')
			bin = (bin << 1) | 1;
		else if (b[idx] == '0')
			bin = bin << 1;
		else
			return (0);
}
	return (bin);
}
