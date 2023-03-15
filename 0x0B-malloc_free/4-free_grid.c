#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free the allocated memory
 * @grid: pointer to the grid function
 * @height: height of the grid function
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
