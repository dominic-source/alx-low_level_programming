#include "main.h"

/**
 * set_bit - set bit
 * @n: the number
 * @index: the index to set
 * Return: the set number
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL)
		return (-1);
	*n = (*n) | (0x01 << index);
	return (-1);
}
