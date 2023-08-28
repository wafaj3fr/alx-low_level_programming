i#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: character to search for
 * Return: pointer to first occurence of c or NULL
 */

char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
