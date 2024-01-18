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
	size_t low_index = 0, high_index = size - 1, mid_index;

	if (array == NULL || size == 0)
	return (-1);

	while (low_index <= high_index)
	{
	printf("Searching in array: ");
	for (size_t i = low_index; i < high_index; i++)
	printf("%d, ", array[i]);
	printf("%d\n", array[high_index]);

	mid_index = low_index + (high_index - low_index) / 2;

	if (array[mid_index] == value)
	return (mid_index);

	if (array[mid_index] < value)
	low_index = mid_index + 1;
	else
	high_index = mid_index - 1;
	}

	return (-1);
}
