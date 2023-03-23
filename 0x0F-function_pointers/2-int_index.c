#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to a function
 * Return: 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL)
return (1);
if (cmp == NULL)
return (1);
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);

return (-1);
}
