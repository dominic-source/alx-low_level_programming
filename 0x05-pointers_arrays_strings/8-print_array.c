#include "main.h"

/**
 * print_array - prints n element of an array
 * Return: Nothing
 * @a: Pointer to an integer
 * @n: Second argument
 */
void print_array(int *a, int n)
{
int i = 1;
printf("%i", a[0]);
while (i < n)
{
printf(", %i", a[i]);
i++;
}
printf("\n");
}
