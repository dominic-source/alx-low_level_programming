#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: a pointer to integer
 */
int *array_range(int min, int max)
{
int *arr_int;
int i, j = 0;

if (min > max)
return (NULL);

arr_int = calloc((max - min + 1), sizeof(*arr_int));

if (arr_int == NULL)
return (NULL);

for (i = min; i <= max; i++)
arr_int[j++] = i;

return (arr_int);
}
