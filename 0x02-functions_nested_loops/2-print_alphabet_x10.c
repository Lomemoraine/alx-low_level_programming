#include "main.h"

/**
 * print_alphabet_x10 - Perform the task of printing the alphabet.
 *
 * Return: void or none
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
