#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be calculated
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len;

	len = *(s + 1) - s;
	_putchar('\n');

	return (len);
}
