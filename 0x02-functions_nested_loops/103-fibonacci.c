#include <stdio.h>

/**
 * main - print the fibonacci sequence
 * Description: print the first 50 fibonacce numbers
 * Return: void
 */
int main(void)
{
unsigned long i = 1;
unsigned long j = 2;
int count = 50;
int k = 0;
unsigned long m;
unsigned long sum = 0;

while (k < count)
{
m = j + i;
i = j;
j = m;
if (i <= 4000000 && (i % 2 == 0))
{
sum += i;
}
k++;
}
printf("%lu", sum);
printf("\n");
return (0);
}
