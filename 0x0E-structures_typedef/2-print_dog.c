#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dobf struct
 * @d: a struct pointer
 * Return: Nothing
 */
void print_dog(struct dog *d)
{

if (d == NULL)
return;

if (d->name == 0)
printf("Name: %s\n", "(nil)");
else
printf("Name: %s\n", d->name);

printf("Age: %.6f\n", d->age);

if (d->owner == 0)
printf("Owner: %s\n", "(nil)");
else
printf("Owner: %s\n", d->owner);

return;
}
