#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 * Return: A pointer to the allocated 2D grid,
 * or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int lim, bit;
	int **s;

	if (width < 1 || height < 1)
	return (NULL);
	s = (int **)malloc(sizeof(int *) * height);

	if (!s)
	{
	free(s);
	return (NULL);
	}
	lim = 0;
	while (lim < height)
	{
	s[lim] = (int *)malloc(sizeof(int) * width);

	if (!s[lim])
	{
	bit = 0;
	while (bit < height)
	{
		free(s[bit]);
		bit++;
	}
	free(s);
	return (NULL);
	}
	lim++;
	}
	lim = 0;
	while (lim < height)
	{
	bit = 0;
	while (bit < width)
	{
	s[lim][bit] = 0;
	bit++;
	}
	lim++;
	}
	return (s);
}
