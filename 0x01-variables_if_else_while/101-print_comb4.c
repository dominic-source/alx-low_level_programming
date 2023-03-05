#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combination of three digits
 * Description: main will display all possible combination of three digits
 * Return: main return 0 at the end of the function
 */
int main(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 10; k++)
{
if (i < j && j < k)
{
if (k != 2)
{
putchar(',');
putchar(' ');
}
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
}
}
}
}
putchar('\n');
return (0);
}
