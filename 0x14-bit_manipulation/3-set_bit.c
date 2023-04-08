#include "main.h"

/**
 * set_bit - set the bit of n at index
 * @n: bit to set
 * @index: index to set in
 * Return: 1 if no error, -1 if this is error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned int) * 8))
		return (-1);
	*n = (*n | (1lu << index));
	return (1);
}
