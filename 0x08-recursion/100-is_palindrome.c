#include "main.h"

/**
 * length - checks the lengths of string
 * @s: string
 * Return: return length of string
 */

int length(char *s)
{
if (!*s)
{
return (0);
}
return (1 + length(s + 1));
}

/**
 * pal - check if string is palindrome
 * or not
 * @s: string
 * @l: position
 * @s: string
 * Return: boolean value
 */

int pal(char *s, int l)
{
if (l < 1)
{
return (1);
}
if (*s == *(s + 1))
{
return (pal(s + 1, l - 2));
}
return (0);
}

/**
 * is_palindrome - check is string is palindrome
 * @s: string
 * Return: 1 if string is palindrome or 0 if not
 */

int is_palindrome(char *s)
{
int len = length(s);

return (pal(s, len - 1));
}
