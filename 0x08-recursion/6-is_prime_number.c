#include "main.h"

/**
 *prime - recursion loop
 *@n: integer
 *@i: int that iterates
 *return: 1 or 0
 */
int prime(int n, int i)
{

if (i < n)
{

if (n % i == 0)
{
return (0);
}
else
{
return (prime(n, i + 1));
}
}

else
{
return (1);
}
}

/**
 *is_prime_number - evaluate prime number
 *@n: integer
 *return: 1 or 0
 */
int is_prime_number(int n)
{

if (n <= 1)
{
return (0);
}
else
{
return (prime(n, 2));
}
}
