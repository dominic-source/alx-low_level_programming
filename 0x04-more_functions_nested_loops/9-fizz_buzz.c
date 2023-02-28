#include <stdio.h>

/**
 * main - print numbers, fizz and buzz in multiples
 * Description: a function to print 1 to 100 replacing 3 and 5
 * Return: void
 * @void: no argument
 */
void main(void)
{
int i;
printf("1");
for (i = 2; i < 101; i++)
{
if (((i % 3) == 0) && ((i % 5) == 0))
printf(" %s", "FizzBuzz");
else if ((i % 3) == 0)
printf(" %s", "Fizz");
else if ((i % 5) == 0)
printf(" %s", "Buzz");
else
printf(" %i", i);
}
printf("\n");
return;
}
