#include "main.h"


/**
 * print_diagonal - print line
 * Description: A function that print lines given a parameter
 * Return: void
 * @n: number of lines
 */
void print_diagonal(int n)
{
int i = 0;
while (n > 0)
{
while (i < n)
{
int j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
n--;
}
_putchar('\n');
return;
}
