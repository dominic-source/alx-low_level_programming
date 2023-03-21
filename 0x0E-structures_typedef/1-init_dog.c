#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - initializes dog
 * @d: a dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
