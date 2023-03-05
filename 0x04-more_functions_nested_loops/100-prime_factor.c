#include <stdio.h>

/**
 * main - print prime factor
 * Return: Nothing
 * @void: No arguments
 */
int main(void)
{
long int i = 612852475143;
long int j;
j = 2;
while (j <= i)
{
while (i % j == 0)
{
i = i / j;
}
j++;
}
printf("%ld\n", j);
return (0);
}

