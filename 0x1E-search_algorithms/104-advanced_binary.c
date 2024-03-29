#include "search_algos.h"

/**
 * advance_binary_search - search for the index using a key
 * @array: the array of integers
 * @lower: the lower bound to search from
 * @upper: the upper bound to search to
 * @value: the value in search of
 * Return: index or -1
 */
int advance_binary_search(int *array, size_t lower, size_t upper, int value)
{
	size_t mid, i;

	if (lower > upper)
		return (-1);
	mid = (lower + upper) / 2;

	printf("Searching in array: %i", array[lower]);
	for (i = lower + 1; i <= upper; i++)
		printf(", %i", array[i]);
	printf("\n");

	if (array[mid] == value)
	{
		if (mid == lower && array[mid - 1] != value)
			return (mid);
		else if (mid == lower && array[mid - 1] == value && lower != 0)
			return (advance_binary_search(array, lower - 1, mid, value));
		return (advance_binary_search(array, lower, mid, value));
	}
	else if (array[mid] < value)
		return (advance_binary_search(array, mid + 1, upper, value));
	return (advance_binary_search(array, lower, mid, value));
}



/**
 * advanced_binary - apply an advance binary search algorithm
 * @array: the array of sorted integers
 * @size: the size of the array
 * @value: the key in search of
 * Return: -1 or index
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (advance_binary_search(array, 0, size - 1, value));
}
