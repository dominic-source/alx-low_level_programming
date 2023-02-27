#include "main.h"

/**
 * print_times_table - display n times table
 * Description: A function that prints out all the n times table
 * Return: void
 */
void print_times_table(int n)
{
int i = 0;
if( n < 15 && n > 0)
{
while (i <= n)
{
int k = 0;
while (k <= n)
{
if (((i * k) / 10) == 0)
{
if (k != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + (i * k));
}
else
_putchar('0' + k);
}
else if(((i * k) / 100) == 0)
{
if (k != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + (i * k) / 10);
_putchar('0' + (i * k) % 10);
}
else
_putchar('0' + k);
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + (i * k) / 100);
_putchar('0' + ((i * k) / 10) % 10);
_putchar('0' + (i * k) % 10);
}
k++;
}
_putchar('\n');
i++;
}
}
}
