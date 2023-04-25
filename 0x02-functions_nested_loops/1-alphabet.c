#include "main.h"

/**
 *print_alphabet - function that performs the task of printing out the alphabets
 *
 *Return: void or empty since the function is declared to return nothing or void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
