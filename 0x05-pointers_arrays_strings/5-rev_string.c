#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = len - 1; j >= 0; j--)
	{
		return (s[j]);
	}
	_putchar('\n');
}
