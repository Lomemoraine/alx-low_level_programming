#include "main.h"

/**
 *_isdigit - check digits 0  through 9
 *@c: The number to be checked
 *Return: 1 if digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
