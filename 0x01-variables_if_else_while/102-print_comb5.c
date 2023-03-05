#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combination of two digits
 * Description: main will display all possible combination of double digits
 * Return: main return 0 at the end of the function
 */
int main(void)
{
int i, j, k, l;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 10; k++)
{
for (l = 0; l < 10; l++)
{
if (((k + l) > (i + j) && k >= i) || i < k)
{
if (!(i == 0 && k == 0 && j == 0 && l == 1))
{
putchar(',');
putchar(' ');
}
putchar('0' + i);
putchar('0' + j);
putchar(' ');
putchar('0' + k);
putchar('0' + l);
}
}
}
}
}
putchar('\n');
return (0);
}
