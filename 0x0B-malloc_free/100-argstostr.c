#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguments passed to the program
 * @av: array of pointers
 * Return: If ac = 0, av = NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
char *str;
int arg, byte, index, size = ac;

if (ac == 0 || av == NULL)
	return (NULL);

for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
{
size++;
}
}

str = malloc(sizeof(char) * size + 1);

if (str == NULL)
	return (NULL);

i = 0;

for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
{
str[i++] = av[arg][byte];
}
str[i++] = '\n';
}

str[size] = '\0';

return (str);
}
