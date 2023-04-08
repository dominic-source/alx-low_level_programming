#include "main.h"

/**
 * clear_bit - clears a bit at a particular index
 * @n: number to clear
 * @index: index to clear in
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n & (~(1lu << index)));
	return (1);
}
