#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: d
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name == NULL)
	{
	printf("Name: (nil)\n");
	}
	else
	{
	printf("Name: %s\n", d->name);
	}
	}
}
