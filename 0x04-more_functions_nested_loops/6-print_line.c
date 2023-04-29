#include "main.h"

/**
 *print_line - Draw straight line,takes parameters
 *@n: The number of lines to draw
 *
 * Return: 0
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
