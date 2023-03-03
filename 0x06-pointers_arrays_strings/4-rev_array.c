#include "main.h"

/**
 * reverse_array - reverses an array
 * Return: Nothing
 * @a: the pointer to integer to reverse
 * @n: length of the array
 */
void reverse_array(int *a, int n)
{
int i = 0;
int v;

while (i < (n / 2))
{
v = a[i];
a[i] = a[n - i - 1];
a[n - 1 - i] = v;
i++;
}
return;
}
