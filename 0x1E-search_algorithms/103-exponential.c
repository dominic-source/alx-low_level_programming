#include "search_algos.h"

/**
 * exponential_search - search exponentially
 * @array: a sorted array
 * @size: the size of the array
 * @value: the value of the array
 * Return: the index or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t upper = size - 1, lower = 0, mid, i, bound = 1;

	if (array == NULL)
		return (-1);
	/* Find the bound current and previous bound value */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%li] = [%i]\n", bound, array[bound]);
		bound *= 2;
	}
	upper = (bound < size) ? bound : size - 1;
	lower = bound / 2;
	printf("Value found between indexes [%li] and [%li]\n", lower, upper);

	/* Perform a binary search of the value within that range */
	while (lower <= upper)
	{
		printf("Searching in array: %i", array[lower]);
		for (i = lower + 1; i <= upper; i++)
			printf(", %i", array[i]);
		printf("\n");
		mid = (lower + upper) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			upper = mid - 1;
		else
			lower = mid + 1;
	}
	return (-1);
}
