#include "main.h"

void __putchar(int);
/**
 * print_times_table - display n times table
 * Description: A function that prints out all the n times table
 * Return: void
 * @n: an integer
*/
void print_times_table(int n)
{
int i = 0;
if (n < 15 && n > 0)
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
__putchar(3);
_putchar('0' + (i * k));
}
else
_putchar('0' + k);
}
else if (((i * k) / 100) == 0)
{
if (k != 0)
{
__putchar(2);
_putchar('0' + (i * k) / 10);
_putchar('0' + (i * k) % 10);
}
else
_putchar('0' + k);
}
else
{
__putchar(1);
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
else if (n == 0)
_putchar('0');
}

/**
 * __putchar - prints spaces
 * Description: A function to prints spaces
 * Return: void
 * @n: an integer
 */
void __putchar(int n)
{
if (n == 2)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if (n == 3)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
else if (n == 1)
{
_putchar(',');
_putchar(' ');
}
}
