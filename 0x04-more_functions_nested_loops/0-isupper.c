#include "main.h"

/**
 *_isupper - check for uppercase characters
 *@c: Ascii code to check
 *Return: 1 for upper case else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
