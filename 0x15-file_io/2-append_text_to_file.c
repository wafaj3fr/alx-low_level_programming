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
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int d;
	ssize_t b = 0, l = length(text_content);

	if (filename == NULL)
		return (-1);
	d = open(filename, O_WRONLY | O_APPEND);
	if (d == -1)
		return (-1);
	if (l)
		b = write(d, text_content, l);

	close(d);

	return (b == l ? 1 : -1);
}
