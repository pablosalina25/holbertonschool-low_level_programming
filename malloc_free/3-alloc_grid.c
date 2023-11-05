#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **alloc_grid(int width, int height)
{
	int a, b;
	int **s;

	if (width < 1 || height < 1)
	return (NULL);
	s = (int **)malloc(sizeof(int *) * height);

	if (!s)
	{
	free(s);
	return (NULL);
    }
	a = 0;
	while (a < height)
	{
	s[a] = (int *)malloc(sizeof(int) * width);

	if (!s[a])
	{
	b = 0;
	while (b < height)
	{
		free(s[b]);
		b++;
	}
	free(s);
	return (NULL);
	}
	a++;
	}
	a = 0;
	while (a < height)
	{
	b = 0;
	while (b < width)
	{
	s[a][b] = 0;
	b++;
	}
	a++;
	}
	return (s);
}
