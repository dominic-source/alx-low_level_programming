#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: pointer to dog_t
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
free(d);
return;
}

free(d);
 free(d->name);
}
