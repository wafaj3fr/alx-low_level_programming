#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the string
 * Return: modified string
 */

char *string_toupper(char *)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
