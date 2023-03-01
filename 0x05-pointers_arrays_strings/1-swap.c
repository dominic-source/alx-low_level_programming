#include "main.h"

/**
 * swap_int - swaps integer
 * Return: Nothing
 * @a: an integer argument
 * @b: an integer argument
 */
void swap_int(int *a, int *b)
{
int m = *b;
int n = *a;

*a = m;
*b = n;
}
