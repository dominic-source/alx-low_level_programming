#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all the numbers of base 16
 * Description: Print all the 
 * Return: return 0
 */
int main (void)
{
int base_16 = 16;
int i = 0;
int j = 0;
char letter = 'a';
  
for (i = 0; i < base_16; i++)
{
if (i > 9)
{
putchar(letter + j);
 j++;
}
else
{
putchar('0' + i);
}
}
putchar('\n');
return (0);
}
