#include "main.h"

/** print_last_digit - print last digit
 * @n: the passed args
 * Return: last digit
 */

int print_last_digit(int n)
{
int x;

if (n < 0)
{
n = -n;
}
_putchar('0');
return (n % 10);
}
