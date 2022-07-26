#include "main.h"

/**
 * str_concat - concatinating two strings
 * @s1: first string
 * @s2: second string
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, m = 0;
char *p;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i])
{
i++;
}
while (s2[j])
{
j++;
}
k = i + j;
p = (char *)malloc(k *sizeof(char) + 1);
if (p == NULL)
{
return (NULL);
}
j = 0;

while (m < k)
{
if (m < i)
{
p[m] = s1[m];
}
if (m >= i)
{
p[m] = s2[j];
j++;
}
m++;
}
p[m] = '\0';
return (p);
}
