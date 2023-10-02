#include "main.h"

/**
 * length - gets the length of a string
 * @s: string
 * Return: length of string or 0
 */

int length(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (*s++)
		i++;

	return (i);
}

/**
 * create_file - creates a file.
 * @filename: file name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int d;
	ssize_t b = 0, l = length(text_content);

	if (filename == NULL)
		return (-1);
	d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0400 | 0200);
	if (d == -1)
		return (-1);
	if (l)
		b = write(d, text_content, l);

	close(d);

	return (b == l ? 1 : -1);
}

