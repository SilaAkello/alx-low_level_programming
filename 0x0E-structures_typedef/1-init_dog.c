#include <stdlib.h>
#include "dog.h"

/**
 * init_dog: THis one here will initializes a variable of type struct dog
 * @d:  here is a pointer to instruct dog to initialize
 * @name- this is the  name to initialize
 * @age: This is the  age to initialize
 * @owner- here we have owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}














