#include "main.h"

/**
 *print_diagonal - takes params to draw a diogonal line n the terminal
 *@n: The number of times to print diagonal lines
 *
 *Return:0
 */

void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (j = 0; k < j; k++)
			{
				_putchar(32);
			}

			_putchar(92);

			_putchar('\n');
		}
	}
}
