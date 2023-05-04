#include "main.h"

/**
 * print_binary - print binary
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	unsigned int i, start = 0, size = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = size + 1; i != 0; --i)
	{
		j = (n >> (i - 1)) & 1lu;
		if (j != 0)
		{
			_putchar('1');
			start = 1;
		}
		else if (j == 0 && start)
			_putchar('0');
	}
}
