#include "main.h"

/**
 * print_triangle - print triangle #
 * Description: a function to a triangle of #
 * Return: void
 * @size: size is an integer
 */
void print_triangle(int size)
{
int i = 0;
int j = size;
int k = 0;
while (i <= size)
{
j = size - i;
k += i;
while (j != 0)
{
_putchar(' ');
j--;
}

while (k != 0)
{
_putchar('#');
k--;
}
_putchar('\n');
i++;
}
}
