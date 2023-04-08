#include "main.h"

/**
 * get_endianness - get the endianness of the system
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int i = 1;
	char *e;

	e = (char *)&i;

	if (*e)
		return (1);
	else
		return (0);
}
