#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a two dimensional array
 * @width: width of the array, an integer
 * @height: height of the array, an integer
 * Return: a pointer to an array
 */
int **alloc_grid(int width, int height)
{
int **my_dim_arr;
int i, j, k, l;

if (width <= 0 || height <= 0)
return (NULL);

my_dim_arr = malloc(sizeof(*my_dim_arr) * height);

if (my_dim_arr == NULL)
return (NULL);

for (k = 0; k < height; k++)
{
my_dim_arr[k] = malloc(sizeof(int) * width);
if (my_dim_arr[k] == NULL)
{
free(my_dim_arr);
for (l = 0; l < k; l++)
free(my_dim_arr[l]);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
my_dim_arr[i][j] = 0;
}

return (my_dim_arr);
}
