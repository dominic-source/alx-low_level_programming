#include "main.h"

/**
 * print_array - prints n element of an array
 * Return: Nothing
 * @a: Pointer to an integer
 * @n: Second argument
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i == 0)
printf("%i", a[i]);
else
printf(", %i", a[i]);
i++;
}
printf("\n");
}
