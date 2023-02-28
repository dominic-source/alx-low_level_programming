#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 * Description: A function to print all numbers from 0 to 14
 * Returns: void
 */
void more_numbers(void)
{
int j = 0;

while (j < 10)
{
int i = 0;

while (i <= 14)
{
if (i > 10)
{
_putchar('0' + (i / 10));
}
_putchar('0' + (i % 10);
i++;
}
j++;
_putchar('\n');
}
return;
}
