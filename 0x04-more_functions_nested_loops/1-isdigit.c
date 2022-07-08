#include "main.h"

/**
 *_isdigit - verifies character as digit or not
 *@c: tested vharacter
 *Return: returns 1 or 0
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
else
{
return (0);
}
}
