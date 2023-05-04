#include "main.h"

/**
 * print_binary - print binary
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	int i, start = 0, size = sizeof(unsigned long int) + 2;
	unsigned long int j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = size; i >= 0; i--)
	{
		j = n & (1lu << i);
		if (j > 0)
		{
			_putchar('1');
			start = 1;
		}
		else if (j == 0 && start)
			_putchar('0');
	}
}
