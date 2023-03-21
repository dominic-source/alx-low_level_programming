#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
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
dog_t *cpy_dog;

cpy_dog = malloc(sizeof(char *) + sizeof(char *));

new_dog = malloc(sizeof(dog_t));

if (cpy_dog == NULL)
return (NULL);

if (new_dog == NULL)
return (NULL);

new_dog->name = name;
new_dog->owner = owner;
new_dog->age = age;

cpy_dog->name = new_dog->name;
cyp_dog->owner = new_dog->owner;

return (new_dog);
}
