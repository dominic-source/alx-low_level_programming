#include "search_algos.h"
#include <math.h>

/**
 * min - return minimum value
 *
 * @b: a value index
 * @n: the size
 * Return: the minimum of both
 */
size_t min(size_t b, size_t n)
{
	if (b < n)
		return (b);
	return (n);
}


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
	size_t a, b;

	a = 0;
	b = sqrt(size);

	if (array == NULL)
		return (-1);
	while (array[min(b, size) - 1] < value)
	{
		printf("Value checked array[%li] = [%i]\n", a, array[a]);
		a = b;
		b += sqrt(size);
		if (a >= size)
			return (-1);
	}
	printf("Value found between indexes [%li] and [%li]\n", a, b);
	while (array[a] < value)
	{
		a += 1;
		if (a == min(b, size))
			return (-1);
	}
	if (array[a] == value)
		return (a);
	return (-1);
}
