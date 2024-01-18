#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to search.
 *
 * Return: The index of the value if found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		if (value == array[index])
			return (index);

		index++;
	}

	return (-1);
}
