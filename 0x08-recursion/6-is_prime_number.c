#include "main.h"
int actual_prime(int n, int i);

/**
 * is_prime_number - check if a number is prime
 * Return: 1 if prime and 0 if not
 * @n: the number to check
 */
int is_prime_number(int n)
{
if (n <= 0 || n == 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - check if a number is prime
 * Return: 1 if prime and 0 if not
 * @n: the number to check
 * @i: int count
 */
int actual_prime(int n, int i)
{
/* base case */
if (i == 1)
return (1);
if (n % i == 0)
return (0);
return (actual_prime(n, i - 1));
}
