#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main prints out the sign and number of a random number
 * Description - a function to print a random number with it signs in words
 * Return - return's zero
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%i is positive\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else if (n == 0)
printf("%i is zero\n", n);
return (0);
}
