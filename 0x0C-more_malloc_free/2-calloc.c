#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: array size
 * @size: size in bytes of each array
 * Return: pointer to void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

char *all_c;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

/*my_size = nmemb * size;*/

all_c = calloc(nmemb, size);

if (all_c == NULL)
return (NULL);

for (i = 0; i < nmemb; i++)
all_c[i] = 0;

return (all_c);
}
