#include "main.h"

/**
 * clear_bit - clears the bit at a particular index
 * @n: number
 * @index: the index to clear at
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL)
		return (-1);
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = (*n) & (~(1lu << index));
	return (1);
}
