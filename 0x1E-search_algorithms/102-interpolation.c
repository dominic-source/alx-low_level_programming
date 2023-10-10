#include "search_algos.h"

/**
 * interpolation_search - search an array using interolation search method
 * @array: an array of sorted integers
 * @size: the size of the array
 * @value: the value in search of
 * Return: index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);
	while (array[high] != array[low] && value >= array[low] &&
			value <= array[high])
	{
		mid = low + (((double)(value - array[low]) / (array[high] - array[low])) *
				(high - low));
		printf("Value checked array[%li] = [%i]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);
	mid = low + (((double)(value - array[low]) / (array[high] - array[low])) *
			(high - low));
	printf("Value checked array[%li] is out of range\n", mid);
	return (-1);
}
