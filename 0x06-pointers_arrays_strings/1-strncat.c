#include "main.h"

/**
 *_strncat - concatenate and add inputed number
 *@dest: string to be appended
 *@src: string to be completed at end of dest
 *@n: integer parameter
 *return: return new string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int dest_len = 0;

while (dest[i++])
{
dest_len++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[dest_len++] = src[i];
}
return (dest);
}
