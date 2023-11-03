#include <stdlib.h>
/**
 * create_array - an array of characters initialized
 * with a specific character.
 * @size: Size of the array.
 * @c: Character to initialize the array with.
 * Return: Pointer to the array, or NULL on failure.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	return (NULL);

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	return (NULL);
	for (unsigned int i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
