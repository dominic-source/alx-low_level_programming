#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out single digit in base 10
 * Description: main print out number in base 10 that are signle digit
 * Return: main return 0 after completion
 */
int main(void)
{
int i = 0;
int base = 10;

while (i < 10)
{
printf("%i", i);
i++;
}
putchar('\n');
return (0);
}
