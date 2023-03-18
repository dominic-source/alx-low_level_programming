#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory
 * @b: an unsigned integer
 * Return: a pointer to any data type;
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL || b == INT_MAX)
exit(98);
return (ptr);
}
