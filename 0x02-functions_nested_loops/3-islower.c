#include "main.h"

/**
 *_islower - function to check a charcters casing if it is lower
 *
 *Return: 1 if lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
