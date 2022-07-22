#include <stdio.h>

/**
 * main - prints its name
 * @argc: argc parameter
 * @argv: array
 * Return: 0 if success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
