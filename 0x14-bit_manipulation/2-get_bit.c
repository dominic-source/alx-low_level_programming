#include "main.h"
#include <stddef.h>

/**
 * get_bit - get bit from index start from zero
 * @n: number
 * @index: index to get
 * Return: number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value = (n & (1u << (index)));

	int test = (n & ((~0x00) << (index)));

	if (test == 0)
		return (-1);

	return (value > 0 ? 1 : 0);
}
