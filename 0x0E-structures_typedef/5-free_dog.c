#include <stdlib.h>
#include "dog.h"

/**
 * free_dog: this one here is the one to frees memory allocated for a struct dog
 * @d :will struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

