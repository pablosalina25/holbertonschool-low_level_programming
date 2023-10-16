#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @i: the number of times the character _ should be printed
 *
 * Return: If i is 0 or less, the function should only print \n
 */
void print_line(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }

    if (n <= 0)
    {
        _putchar('\n');
    }
}

