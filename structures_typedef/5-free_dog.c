#include "dog.h"
#include <stdio.h>

/**
 * free_dog - free all the dogs using 'free'stmnt
 *@d:dog_t pointer
 *
 */

void free_dog(dog_t *d);
{
	if (d != NULL)
	{
		free(d->name)
		free(d->age)
		free(d->owner)
		free(d)
	}
}
