#include "main.h"

/**
 *prime - return 0 or 1
 *@n: integer
 *@i: int that iterates
 *Return: 1 if number is prime or
 *0 if number is not
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
 *Return: 1 if number is prime or.
 *0 if number is not prime.
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
