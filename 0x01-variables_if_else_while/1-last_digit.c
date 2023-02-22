#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  Display a string.
 * Description: Display a string that has a random number
 * and the last digit of the random number
 * Return: it returns zero
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = (n % 10);

if (last_digit > 5)
printf("Last digit of %i is %i and is greater than 5 \n", n, last_digit);
else if (last_digit == 0)
printf("Last digit of %i is %i and is zero \n", n, last_digit);
else if (last_digit < 6 && last_digit != 0)
printf("Last digit of %i is %i and is less \
than 6 and not zero \n", n, last_digit);
return (0);
}
