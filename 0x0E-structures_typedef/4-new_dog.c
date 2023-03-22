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
int size_name = strlen(name) + 1;
int size_owner = strlen(owner) + 1;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->name = malloc(sizeof(char)) * size_name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = malloc(sizeof(char)) * size_owner);
if (new_dog->owner == NULL)
{
free(new_dog);
free(new_dog->owner);
return (NULL);
}

strcpy(new_dog->name, name);
strcpy(new_dog->owner, owner);
new_dog->age = age;

return (new_dog);
}
