#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j, spaces, hashes;
for (i = 1; i <= size; i++)
{
spaces = size - i;
hashes = i;
for (j = 1; j <= spaces; j++)
{
_putchar(' ');
}
for (j = 1; j <= hashes; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}