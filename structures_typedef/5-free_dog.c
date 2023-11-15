#include "dog.h"
#include <stdlib.h>

/**
 * free dog - free a dog
 *
 * @d:day to free
 *
 * Return: void
 **/

void free_dog(dog_t *d)

{
	if (d != 0)
		return;
	if  (d -> name)
		free (d -> name);
	if (d -> owner)
		free (d -> owner);
	free(d);
}

