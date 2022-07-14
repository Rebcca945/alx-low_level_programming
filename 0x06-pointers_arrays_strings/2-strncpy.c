#include "main.h"

/**
 * _strncpy - copies a string
 * using atmost an inputed number of byte
 *@dest: stor string copy
 *@src: source string
 *@n: maximum number of byte
 *@Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
