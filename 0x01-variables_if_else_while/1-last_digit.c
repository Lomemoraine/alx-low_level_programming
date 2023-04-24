#include <stdlib.h>
#include <stdio.h>
/**
 * main -entry point for our execution,where the compilation and execution of  the code happens
 * Return: 0 for a succesful execution
 */
int main(void)
{
	int n, n1;

	
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (nl > 5)
	{
		printf("Last digit of %d is %d \t This is greater than 5\n", n, nl);
	}
	else if (nl == 0)
	{
		printf("Last digit of %d is %d\t This is 0\n", n, n1);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 \t It is  not 0\n", n, nl);
	}
	return (0);
}
