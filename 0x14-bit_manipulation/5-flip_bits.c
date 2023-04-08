#include "main.h"

/**
 * flip_bits - checks the number of bits to flip
 * @n: number to compare
 * @m: number to compare 2
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0, j = 0;

	for (i = 0; i < (sizeof(unsigned long int)); i++)
	{
		if ((n & (1lu << j)) != (m & (1lu << j)))
			count++;
		j++;
	}
	return (count);
}
