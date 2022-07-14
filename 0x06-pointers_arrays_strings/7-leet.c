#include "main.h"

/**
 * leet - encode string
 * @str: string to be encoded
 * Return: encode string
 */

char *leet(char *str)
{
int num1 = 0;
int num2;
char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[++num1])
{
for (num2 = 0; num2 <= 7; num2++)
{
if (str[num1] == leet[num2] ||
		str[num1] - 32 == leet[num2])
	str[num1] = num2 + '0';
}
}
return (str);
}
