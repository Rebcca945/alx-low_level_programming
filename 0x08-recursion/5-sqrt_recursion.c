#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
{
return (n);
}
else if (i * i < n)
{
return (_sqrt_recursion(i + i, n));
}
else if (i * i == n)
{
return (1);
}
else
{
return (-1);
}
}
