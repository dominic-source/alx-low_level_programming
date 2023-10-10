#include "search_algos.h"


/**
 * linear_search - find a number from a list of integers/numbers
 *
 * @array: this is the array of integers
 * @size: the size of the array
 * @value: the value in search of
 * Return: 1 or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}

	return (-1);
}
