#include <stdio.h>

/**
 * main - print prime factor
 * Return: Nothing
 * @void: No arguments
 */
int main(void)
{
long int i = 612852475143;
long int value = 1;
long int j;
long int k;
for (j = 1; j < i; j++)
{
if ((i % j) == 0)
{
for (k = 2; k < j; k++)
{
if ((j % k) == 0)
{
break;
}
else
{
value = j;
}
}
}
}
printf("%li\n", value);
return (0);
}

