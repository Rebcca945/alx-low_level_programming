#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_number(int n)
{
unsigned int m;

if (n < o)
{
_putchar('-');
m = -n;
}
else
{
m = n;
}
if (m / 10 != 0)
print_number(m / 10);
_putchar((m % 10) + '0');
}
