#include "main.h"

/**
 * len  - checks the lengths of string
 * @s: string
 * Return: return length of string
 */

int len(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + len(s + 1));
}

/**
 * pal - check if string is palindrome
 * or not
 * @i: integer
 * @l: length of string
 * @s: string
 * Return: if palindrome 1 if not 0
 */

int pal(int i, int l, int *s)
{
if (l > 0)
{
if (s[i] == s[l])
{
return (pal(i + 1, l - 1, s));
}
else if (s[i] != s[l])
{
return (0);
}
else
{
return (1);
}
}
return (1);
}

/**
 * is_palindrome - check is string is palindrome
 * @s: string
 * Return: 1 if string is palindrome or 0 if not
 */

int is_palindrome(char *s)
{
return (pal(0, len(s) - 1, s));
}
