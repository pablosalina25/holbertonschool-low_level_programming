#include "function_pointers.h"

/**
 * array_iterator - a function that executes
 * a function given as a parameter
 * on each element of an array.
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t iter;

	if (array && action)
	{
	for (iter = 0; iter < size; iter++)
	{
	action(array[iter]);
	}
	}
}
