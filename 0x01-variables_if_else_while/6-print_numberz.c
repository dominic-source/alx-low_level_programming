#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out single digit in base 10
 * Description: main print out number in base 10 that are signle digit
 * Return: main return 0 after completion
 */
int main(void)
{
int i;
  
for (i = -1; i < 9; i++)
{
putchar('1'+ i);
}
putchar('\n');
return (0);
}
