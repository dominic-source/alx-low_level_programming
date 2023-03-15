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
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

my_dim_arr = malloc(sizeof(*my_dim_arr) * height);

if (my_dim_arr == NULL)
{
free(my_dim_arr);
return (NULL);
}
for (i = 0; i < height; i++)
{
my_dim_arr[i] = malloc(sizeof(**my_dim_arr) * width);

if (my_dim_arr[i] == NULL)
{
free(my_dim_arr[i]);
return (NULL);
}
for (j = 0; j < width; j++)
my_dim_arr[i][j] = 0;
}

return (my_dim_arr);
}
