#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to a variable n
 * Return : always 0
 */
int main (void)
{
int n;
if (n > 5) 
{
	printf("%d and is greater than 5\n", n);
}
if (n == 0)
{
	printf("%d and is 0\n", n);
}
if (n < 6 && n != 0)
{
	printf("%d and is less than 6 and not 0\n");
}

printf("\n");

return (0);
}
