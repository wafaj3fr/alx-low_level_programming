#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The string to be reversed
 */

void print_rev(char *s)
{
	int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
