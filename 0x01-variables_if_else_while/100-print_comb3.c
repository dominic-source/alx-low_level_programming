#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combination of single digits
 * Description: main will display all possible combination of double digits
 * Return: main return 0 at the end of the function
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i < j)
{
if (j != 1)
{
putchar(',');
putchar(' ');
}
putchar('0' + i);
putchar('0' + j);
}
}
}
putchar('\n');
return (0);
}
