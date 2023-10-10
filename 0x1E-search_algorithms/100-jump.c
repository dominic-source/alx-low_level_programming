#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for a value in an array using jump search algorithm
 *
 * @array: an array of integers
 * @size: the size of the array
 * @value: the value in search of
 *
 * Return: 1 or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, i;

	if (array == NULL)
		return (-1);

	a = 0;
	b = 0;
	while (b < size && array[b] < value)
	{
		printf("Value checked array[%li] = [%i]\n", b, array[b]);
		a = b;
		b = b + sqrt(size);
	}
	printf("Value found between indexes [%li] and [%li]\n", a, b);
	b = (b < size) ? b : size - 1;
	for (i = a; i <= b; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
