#include "main.h"

/**
 * print_line - print line
 * Description: A function that print lines given a parameter
 * Return: void
 * @n: number of lines
 */
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
return;
}
