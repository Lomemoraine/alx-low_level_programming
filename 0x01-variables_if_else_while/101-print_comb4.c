#include <stdio.h>

/**
 *main - Entry where code execution begins
 *
 *Return:0 for every succesful execution
 */
int main(void)
{
	int n1, n2, n3;

	n1 = 48;
	n2 = 48;
	n3 = 48;

	while (n2 < 58)
	{
		n1 = 48;
		while (n1 < 58)
		{
			n3 = 48;
			while (n3 < 58)
			{
				if (n2 != n1 && n2 != n3 && n1 != n3 && n2 < n1 && n1 < n3)
				{
					putchar(n2);
					putchar(n1);
					putchar(n3);
					if (n1 == 56 && n2 == 55 && n3 == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				n3++;
			}
			n1++;
		}
		n2++;
	}
	putchar('\n');
	return (0);
}
