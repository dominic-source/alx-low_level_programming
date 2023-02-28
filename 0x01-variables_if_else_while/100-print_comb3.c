#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combination of single digits
 * Description: main will display all possible combination of double digits
 * Return: main return 0 at the end of the function
 */
int main(void)
{
int i;

for (i = -1; i < 9; i++)
{
putchar('1' + i);
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}