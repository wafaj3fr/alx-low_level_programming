#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be calculated
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len;

	len = sizeof(s[]) / sizeof(s[0]);

	return (len);
}
