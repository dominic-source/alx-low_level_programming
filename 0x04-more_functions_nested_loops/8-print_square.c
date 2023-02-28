#include "main.h"

/**
 * print_square - print square with a parameter
 * Description: a function that print square using #
 * @size: this the size of the square
 * Return: void
 */
void print_square(int size)
{
int i = 0;
if (size > 0)
{
while (i < size)
{
int j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
else
_putchar('\n');
return;
}
