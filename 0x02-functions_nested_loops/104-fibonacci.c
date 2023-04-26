#include <stdio.h>

/**
 * main - displays all the first 98 Fibonacci numbers
 *
 * Return: 0 for a succesful execution.
 */
int main(void)
{
	int count, boolean, boolean2;
	long int num1, num2, fnum, fnum2, n11, n22;

	num1 = 1;
	num2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", num1, num2);
	for (count = 0; count < 96; count++)
	{
		if (boolean)
		{
			fnum = num1 + num2;
			printf(", %ld", fnum);
			num1 = num2;
			num2 = fnum;
		}
		else
		{
			if (boolean2)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				boolean2 = 0;
			}
			fnum2 = (n11 + n22);
			fnum = num1 + num2 + (fnum2 / 1000000000);
			printf(", %ld", fnum);
			printf("%ld", fnum2 % 1000000000);
			num1 = num2;
			n11 = n22;
			num2 = fnum;
			n22 = (fnum2 % 1000000000);
		}
		if (((num1 + num2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
