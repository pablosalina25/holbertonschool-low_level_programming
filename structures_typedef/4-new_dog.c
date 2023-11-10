#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *new_dog - a function that creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the name of the owner.
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlength = strlen(name) + 1;
	int olength = strlen(owner) + 1;
	dog_t *p = malloc(sizeof(dog_t));

	if (!p)
	{
	return (NULL);
	}

	p->name = malloc(nlength * sizeof(char));
	if (!p->name)
	{
	free(p);
	return (NULL);
	}
	strcpy(p->name, name);
	p->age = age;
	p->owner = malloc(olength * sizeof(char));
	if (!p->owner)
	{
	free(p->name);
	free(p);
	return (NULL);
	}
	strcpy(p->owner, owner);
	return (p);
}
