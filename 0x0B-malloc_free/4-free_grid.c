#include "main.h"

/**
 * free_grid - remove memory allocation
 * @grid: the gird to be freed
 * @height: hight of 2D array
 * Return: void
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
