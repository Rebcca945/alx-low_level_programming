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
if (n > 0) 
	printf("%d is positive\n", x);
if (n == 0)
	printf("%d is zero\n", x);
if (n < 0)
	printf("%d is negative\n", x);
return (0);
}
