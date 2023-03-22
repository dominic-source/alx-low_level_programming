#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
new_dog->name = malloc(sizeof(*(new_dog->name)) * strlen(name));
new_dog->owner = malloc(sizeof(*(new_dog->owner)) * strlen(owner));

if (new_dog == NULL)
{
free(new_dog);
return (NULL);
}

if (new_dog->name == NULL)
{
free(new_dog->name);
return (NULL);
}

if (new_dog->owner == NULL)
{
free(new_dog->owner);
return (NULL);
}

new_dog->name = name;
new_dog->owner = owner;
new_dog->age = age;

return (new_dog);
}
