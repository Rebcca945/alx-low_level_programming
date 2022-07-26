#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string to be duplicated
 * Return: string pointer
 */

char *_strdup(char *str)
{
int i = 1;
char *p;

if (str == NULL)
{
return (NULL);
}

while (str[i])
{
i++;
}
s = (char *)malloc(i *sizeof(char) + 1);
if (p == NULL)
{
return (NULL);
}
while (j < i)
{
p[j] = str[j];
j++;
}
p[j] = '\0';
return (p);
}
