#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to
 * be used to compare values
 * Return: -1 if no match or index of arrayif match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0 || cmp == NULL || array == NULL)
	return (-1);
int i = 0;

for (i > 0; i < size; i++)
{
if (cmp(array[i]))
	return (i);
}
}
