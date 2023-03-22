#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to a previously allocated memory
 * @old_size: the old size
 * @new_size: the new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
int *_ptr;
unsigned int i;

_ptr = (int *)ptr;

if (old_size == new_size)
return ptr;

if (ptr == NULL)
{
new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);
}
else if (new_size == 0 && _ptr != NULL)
{
free (ptr);
return (NULL);
}
else if (new_size > old_size)
{
new_ptr = malloc(old_size + sizeof(*new_ptr));
if (new_ptr == NULL)
return (NULL);

for (i = 0; i < old_size/sizeof(*new_ptr); i++)
new_ptr[i] = _ptr[i];

free (ptr);
}
else
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

for (i = 0; i < (new_size/sizeof(*new_ptr)); i++)
new_ptr[i] = _ptr[i];
free (ptr);
}
return ((void *)new_ptr);
}
