#include "main.h"

/**
 * get_bit - get the bit at a particular index
 * @n: the integer
 * @index: the index
 * Return: 1 or 0, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int j;

	j = n & (0x01 << index);

	if (j > 0)
		return (1);
	else if (j == 0)
		return (0);
	return (-1);
}
