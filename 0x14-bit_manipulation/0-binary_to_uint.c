#include "main.h"
#include <math.h>
#include <stdlib.h>

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: binary string to convert
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i = -1;
	int p = -1;
	int stop = 0;

	if (b == NULL)
		return (0);
	sum += recursive_conv(b, &sum, &i, &p, &stop);
	if (stop)
		return (0);
	return (sum);
}

/**
 * recursive_conv - convert binary to decimal
 * @b: pointer to the binary string
 * @sum: result of the conversion
 * @i: index of each char
 * @p: power for the char
 * @stop: stops recursion encoutering a non 1 or 0
 * Return: total sum to give result
 */
int recursive_conv(const char *b, unsigned int *sum, int *i, int *p, int *stop)
{
	(*i)++;

	/* base case */
	if (b[(*i)] == '\0')
		return (0);
	if (b[*i] != '0' && b[*i] != '1')
	{
		*stop = 1;
		return (0);
	}

	*sum += recursive_conv(b, sum, i, p, stop);
	(*p)++;
	(*i)--;

	return ((b[*i] == '0' ? 0 : 1) * (1 << (*p)));
}
