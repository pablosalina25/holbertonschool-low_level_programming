#include "dog.h"
/**
 * init_dog - Is a function that initialize a variable of type struct dog.
 * @d: a pointer.
 * @name:the name of the dog.
 * @age: the age of the dog.
 * @owner: The name of the owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
