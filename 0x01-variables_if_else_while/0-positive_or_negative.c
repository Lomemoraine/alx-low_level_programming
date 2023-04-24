#include <stdlib.h>// standard c library for input and output functions
#include <time.h>// time library to call srand() for randomizing   time
#include <stdio.h>

/**
 *main - entry point
 *
 *Return:0 after  successful code  execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
