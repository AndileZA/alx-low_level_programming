#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - this program assigns a random number to n each time it is executed
 *	and states whether it is positive or negative
 *
 *Return: Always 0.
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d i zero\n", n);
       return (0);
}

