#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Description: A function to print all numbers from 0 to 9
 * Returns: void
 * @void: no arguments
 */
void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar('0' + i);
i++;
}
_putchar('\n');
}
