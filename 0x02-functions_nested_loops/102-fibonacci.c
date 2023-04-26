#include <stdio.h>

/**
 * main - function that displays the addition of  Fibonacci numbers
 *
 * Return: 0 for a succesful execution.
 */
int main(void)
{
	int count;
	long int num1, num2, fnum;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (count = 0; count < 48; count++)
	{
		fnum = num1 + num2;
		printf(", %ld", fnum);
		num1 = num2;
		num2 = fnum;
	}
	printf("\n");
	return (0);
}
