#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
int size_name = strlen(name);
int size_owner = strlen(owner);
int i;

new_dog = malloc(sizeof(dog_t));
new_dog->name = malloc(sizeof(*(new_dog->name)) * size_name);
new_dog->owner = malloc(sizeof(*(new_dog->owner)) * size_owner);

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

for (i = 0; i < size_name; i++)
new_dog->name[i] = name[i];

for (i = 0; i < size_owner; i++)
new_dog->owner[i] = owner[i];

new_dog->age = age;

return (new_dog);
}
