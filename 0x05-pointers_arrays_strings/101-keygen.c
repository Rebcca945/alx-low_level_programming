#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwd
 * Return: on success 0
 */

int main(void)
{
int pass;
int sum;

strand(time(NULL));
sum = 0;
while (sum <= 2550)
{
pass = (rand() % 128);
sum += pass;
printf("%c", pass);
}
printf("%c", 5331 - sum);

return (0);
}
