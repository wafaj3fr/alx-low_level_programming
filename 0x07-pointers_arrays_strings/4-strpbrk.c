#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the substring
 * Return: a pointer to the byte in s that matches or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] != '\0')
		{
			return (s);
		}
	}
}
