#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: character to be checked
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}