#include <stdio.h>

/**
 * main - print the fibonacci sequence
 * Description: print the first 50 fibonacce numbers
 * Return: void
 */
int main(void)
{
unsigned i = 1;
unsigned j = 2;
int count = 48;
int k = 0;
unsigned m;

printf("%u, %u", i, j);
while (k < count)
{
m = j + i;
i = j;
j = m;
printf(", %u", j);
k++;
}
printf("\n");
return (0);
}
