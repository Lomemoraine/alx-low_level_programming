#include <stdio.h>

/**
 *main - entry where the code excecution takes place
 *
 *Return:0 for a succesful execution
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
