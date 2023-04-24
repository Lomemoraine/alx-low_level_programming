#include <stdio.h>

/**
 *main - entry whre code execution begins
 *
 *Return:0 for a succesful execution
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
