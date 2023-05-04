#include "main.h"

/**
 * get_endianness - get the endianness of the system
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int i = 1;

	if ((i >> 1) > 0)
		return (0);
	else
		return (1);
	return (-1);
}
