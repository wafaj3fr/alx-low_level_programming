#include "main.h"

/**
 * read_textfile - eads a text file and prints it to the POSIX
 * @filename: file name
 * @letters: number of letters
 * Return: number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	ssize_t b;
	char buffer[BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);

	b = read(d, &buffer[0], letters);
	b = write(STDOUT_FILENO, &buffer[0], b);
	close(d);
	return (b);
}
