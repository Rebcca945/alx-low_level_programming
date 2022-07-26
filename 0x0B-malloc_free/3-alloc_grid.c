#include "main.h"

/**
 * alloc_grid - allocates 2D array
 * @width: width of arrary
 * @height: height of array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
int **p;
int i, j, m, n;

if (width <= 0 || height <= 0)
	return (NULL);
p = malloc(height * sizeof(int *));
if (p == NULL)
{
free(p);
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(p[j]);
}
free(p);
return (NULL);
}
}
for (m = 0; m < height; m++)
{
for (n = 0; n < width; n++)
{
p[m][n] = 0;
}
}
return (p);
}
