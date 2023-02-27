#include <stdio.h>

/**
 * main - print all multiples of 1024(excluded)
 * Description - prints all the multiples of 1024
 * Return: 0
 * @void: no arguments
 */
int main(void)
{
int i = 0;
int result = 0;
int value = 1024;

while (i < value)
{
if ((i % 3) == 0 || (i % 5) == 0)
result += i;
i++;
}
printf("%i\n", result);
return (0);
}
