#include "main.h"

/**
 *_islower - function to check if a character is in lower case
 *
 *@c: The character in ASCII code
 *
 *Return: 1 if lowercase,else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
