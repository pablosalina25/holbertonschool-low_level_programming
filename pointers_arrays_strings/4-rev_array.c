#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Array to be reversed
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tem;

	while (i < n / 2)
	{
	tem = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = tem;
	i++;
	}
}
