#include <stdio.h>

/**
 *print_to_98 - function to display natural numbers upto 98,
 *
 *@n: The number to begin counting from.
 *
 *Return: void
 */
void print_to_98(int n)

{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
