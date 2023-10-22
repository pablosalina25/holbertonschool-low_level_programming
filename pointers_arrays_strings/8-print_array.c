#include "main.h"
#include <stdio.h>

/**
 * print_array - Imprime los primeros n elementos de un array.
 * @a: El nombre del array.
 * @n: El número de elementos del array a imprimir.
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	while (i < (n - 1))
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
