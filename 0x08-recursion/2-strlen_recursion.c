#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: pointer of memory
 * Return: strlen_recursion
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recusion(s + 1));
}
}
