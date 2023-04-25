#include "main.h"

/**
 *print_alphabet - performs the task of printing the alphabet
 *
 *Return: void since the print alphabet function is of void type
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
