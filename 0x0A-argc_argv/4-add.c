#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: argc parameter
 * @argv: array
 * Return: 0 if success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
int result = 0, num, i, j, k;

for (i = 1; i < argc; i++)
{
for (j = 0; arg[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("%s\n", "error");
return (1);
}
}
}

for (k = 1; k < argc; k++)
{
num = atoi(argv[k]);
result += num;
}
printf("%d\n", result);
return (0);
}
