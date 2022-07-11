#include "main.h"
#include <unistd.h>

/**
 *_puts - prints string followed by a new line
 *@str: input string
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar (*str);
}
_putchar ('\n');
}
