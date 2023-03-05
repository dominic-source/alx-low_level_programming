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

for (j = 3; j < i; j = j + 2)
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
break;
}
}
}
}
printf("%ld\n", value);
return (0);
}

