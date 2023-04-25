#include "main.h"

/**
 * _isalpha - function to check for a chacter in the alphabet
 *
 *@c: The character in ASCII code
 *
 *Return: 1 for alphabets. else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
