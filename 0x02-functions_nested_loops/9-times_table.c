#include "main.h"

/**
 * times_table - display 9 times table
 * Description: A function that prints out all the 9 times table
 * Return: void
 */
void times_table(void)
{
int i = 0, j = 9;
while (i <= j)
{
int k = 0;
while (k <= j)
{
if (((i * k) / 10) == 0)
{
if (k != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + (i * k));
}
else
_putchar('0' + k);
}
else
{
if (k != 0)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (i * k) / 10);
_putchar('0' + (i * k) % 10);
}
else
_putchar('0' + k);
}
k++;
}
_putchar('\n');
i++;
}
}
