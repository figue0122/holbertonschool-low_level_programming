#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * init_dog - .
 * @d: ..
 * @name: ...
 * @age: .
 * @owner: ..
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
