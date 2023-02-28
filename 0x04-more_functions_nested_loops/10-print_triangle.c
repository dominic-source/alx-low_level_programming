#include "main.h"

/**
 * print_triangle - print triangle #
 * Description: a function to a triangle of #
 * Return: void
 * @size: size is an integer
 */
void print_triangle(int size)
{
int i = 1;
int j = size;
int k = 0;
if (size > 0)
{
while (i <= size)
{
j = size - i;
k += i;
while (j > 0)
{
_putchar(' ');
j--;
}

while (k > 0)
{
_putchar('#');
k--;
}
i++;
_putchar('\n');
}
}
else
_putchar('\n');
}
