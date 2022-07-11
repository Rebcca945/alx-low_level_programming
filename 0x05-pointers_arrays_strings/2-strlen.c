#include "main.h"
#include <string.h>

/**
 * _strlen - returns length of string
 * @s: input string
 * Return: length of string
 */

int _strlen(char *s)
{
int i;

for (; *s != '\0'; s++)
{
i += 1;
}
return (i);
}
