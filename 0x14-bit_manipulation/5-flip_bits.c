#include "main.h"

/**
 * flip_bits - number of bits you will need to flip
 * @n: first number
 * @m: second number
 * Return: the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, size = sizeof(unsigned long int) * 8;

	while (size > 0)
	{
		if ((n & (1lu << size)) != (m & (1lu << size)))
			count++;
		size--;
	}
	return (count);
}
