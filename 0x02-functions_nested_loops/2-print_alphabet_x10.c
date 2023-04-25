#include "main.h"

/**
 * print_alphabet_x10 - Performs the task of printing the alphabet in the count specififed by the loop.
 *
 * Return: void since the function is of void type
 */
void print_alphabet_x10(void)

{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
