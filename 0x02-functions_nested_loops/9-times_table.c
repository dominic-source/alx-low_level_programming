#include "main.h"

/**
 * times_table - display 9 times table
 * Description: A function that prints out all the 9 times table
 * Return: void
 */
void times_table(void)
{
int i = 0;
int j = 9;
while (i <= j)
{
int k = 0;
while (k <= j)
{
if (((i * k) / 10) == 0)
{
_putchar('0' + (i * k));
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar('0' + (i * k) / 10);
_putchar('0' + (i * k) % 10);
_putchar(',');
_putchar(' ');
}
k++;
}
_putchar('\n');
i++;
}
return;
}
