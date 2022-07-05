#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: a charter to be check on
 * Return: return 0 or 1
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
