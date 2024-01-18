#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	return (-1);

	size_t low = 0, high = size - 1, mid;

	while (low <= high)
	{
	mid = low + (high - low) / 2;

	if (array[mid] == value)
	return (mid);

	if (array[mid] < value)
	low = mid + 1;
	else
	high = mid - 1;
	}

	return (-1);
}
