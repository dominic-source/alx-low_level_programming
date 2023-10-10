#include "search_algos.h"

/**
 * binary_search - search for a value using binary search method
 *
 * @array: the array to search from
 * @size: the size of the array
 * @value: the value to search for
 * Return: 1 or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, left, right;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%i", array[i]);
		}
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] == value)
			return (mid);
	}

	return (-1);
}
