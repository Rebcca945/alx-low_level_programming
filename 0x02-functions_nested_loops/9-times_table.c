#include "main.h"

/**
 * times_table - 9 times a number
 * @i: increament
 * @x: store product
 * Return: x
 */
void times_table(void);
{
int i;
int x;

for (i = 0; i < 10; i++)
{
x = i * 9;
_putchar(x);
}
}
