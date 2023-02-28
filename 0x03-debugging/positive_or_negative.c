#include <stdio.h>

/**
 * main - main prints out the sign and number of a random number
 * Description: a function to print a random number with it signs in words
 * Return: returns void
 */
positive_or_negative (int n)
{
  
  if (n > 0)
    printf("%i is positive\n", n);
  else if (n < 0)
    printf("%i is negative\n", n);
  else if (n == 0)
    printf("%i is zero\n", n);
}
