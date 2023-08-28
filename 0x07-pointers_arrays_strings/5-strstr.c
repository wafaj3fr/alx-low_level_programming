#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0') {
		return haystack;
	}

	while (*haystack != '\0') {
		char *ptr = haystack;
		char *p = needle;

		while (*p != '\0' && *ptr == *needle_ptr) 
		{
			ptr++;
			p++;
		}

		if (*needle_ptr == '\0') {
			return haystack;
		}

		haystack++;
	}

	return NULL;
}
