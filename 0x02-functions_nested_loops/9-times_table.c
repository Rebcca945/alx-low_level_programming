#include "main.h"

/**
 * times_table - 9 times a number
 * @i: value of i increamented
 * @j: value of j increamented
 * Return: x
 */

void times_table(void)
{
int i;
int j;

for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 10; j++)
{
_putchar(i * j);
}
}
}
