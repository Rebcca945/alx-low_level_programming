#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed and prints out 
 * based a condition
 * Return : always 0
 */
int main (void)
{
int x;

srand(time(0));
x = rand() - RAND_MAX / 2;
if (x > 0)
	printf("%d is positive\n", x);
if (x == 0)
	printf("%d is zero\n", x);
if (x < 0)
	printf("%d is negative\n", x);
return (0);
}
