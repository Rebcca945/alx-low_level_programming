#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to a variable n
 * Return : always 0
 */
int main(void)
{
int x;

srand(time(0));
x = rand() - RAND_MAX / 2;
if (n > 5) 
	printf("%d and is greater than 5\n", x);
if (n == 0)
	printf("%d and is 0\n", x);
if (n < 6 && n != 0)
	printf("%d and is less than 6 and not 0\n", x);
return (0);
}
