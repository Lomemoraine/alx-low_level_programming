#include "main.h"

/**
 *print_sign - function to check if a number is negative or positive
 *
 * @n: The input number as an integer.
 *
 *Return: 1 and assidn and display + if n is greater than zero
 *0 and prints 0 if n is zero
 *-1 and assigns and display - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
