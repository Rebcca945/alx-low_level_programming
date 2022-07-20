#include "main.h"

/**
 * sqrt_num - checks if sqrt of number exist
 * @n: integer
 * @s: sqrt
 * Return: sqrt of number or -1 for error
 */

int sqrt_num(int n, int s)
{
if ((s * s) == n)
{
return (s);
}
else
{
if ((s * s) > n)
{
return (-1);
}
else
{
return (sqrt_num(n, s + 1));
}
}
}

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 * @n: integer
 * Return: sqrt of n or -1 if n does
 * not have sqrt
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (sqrt_num(n, 0));
}
}
