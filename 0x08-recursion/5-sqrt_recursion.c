#include "main.h"

/**
 * _sqrt - evaluate sqrt
 * @i: integer
 * @n: integer
 * return: sqrt
 */

int _sqrt(int i, int n)
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
return (i);
}

return (-1);
}

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 * @n: integer
 * return: sqrt
 */

int _sqrt_recursion(int n)
{
int i = 0;

if (i < 0)
{
return (-1);
}
else
{
return (_sqrt(i, n));
}
}
