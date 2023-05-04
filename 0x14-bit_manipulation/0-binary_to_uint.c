#include "main.h"

/**
 * binary_to_uint - convert binary to unint
 * @b: binary string
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		count++;
	for (i = count; i > 0; i--)
	{
		if (b[j] == '1')
			sum += 1 * (1 << (i - 1));
		else if (b[j] == '0')
			sum += 0;
		else
			return (0);
		j++;
	}
	return (sum);
}
