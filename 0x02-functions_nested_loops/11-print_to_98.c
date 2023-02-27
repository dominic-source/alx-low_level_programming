#include "main.h"

/**
 * print_to_98 - print all natural numbers to 98
 * Description: A function that prints all natural numbers upto 98
 * Return: void
 * @n: this arguments is the starting point
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%i, ", n);
n++;
}
printf("98");
}
else if (n > 98)
{
while (n > 98)
{
printf("%i, ", n);
n--;
}
printf("98");
}
else
{
printf("98");
}
putchar('\n');
}
