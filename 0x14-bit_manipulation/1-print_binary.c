#include "main.h"

/**
 * print_binary - print number in binary
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int z = 1lu << ((sizeof(unsigned long int) * 4));
	int s = 0;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	while ((z >> i) > 0)
	{
		if ((n & (z >> i)) > 0)
		{
			_putchar('1');
			s = 1;
		}
		else if (s)
			_putchar('0');
		i++;
	}
}
