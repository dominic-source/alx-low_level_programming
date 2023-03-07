#include "main.h"

/**
 * print_diagsums - print sum of two diagonals of a square matrix of integers.
 * Return: Nothing
 * @a: pointer to an array matrix
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
int i;
unsigned int sum_l_d = 0;
unsigned int sum_r_d = 0;
for (i = 0; i < size; i++)
{
sum_l_d += *(a + (i * size) + i);
sum_r_d += *(a + (i * size) + (size - 1 - i));
}
printf("%i, %i\n", sum_l_d, sum_r_d);
return;
}
