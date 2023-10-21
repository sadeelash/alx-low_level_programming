#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Name to set
 * @age: Age to set
 * @owner: Owner to set
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
		d->name = name;
		d->age = age;
		d->owner = owner;
}

