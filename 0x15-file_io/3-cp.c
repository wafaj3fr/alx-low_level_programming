#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"

void check_status(int status, const char *file_name, char perms);

/**
 * main - Copies the content of one file to another.
 * @argc: Argument count.
 * @argv: Arguments passed.
 *
 * Return: 0 on success, exit otherwise.
 */
int main(int argc, char *argv[])
{
	int source, destination;
	ssize_t b_read, b_wrote;
	unsigned int perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);
	check_status(source, argv[1], 'O');

	destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
	check_status(destination, argv[2], 'W');

	while ((b_read = read(source, buffer, sizeof(buffer))) > 0)
	{
		b_wrote = write(destination, buffer, b_read);
		if (b_wrote == -1)
			check_status(-1, argv[2], 'W');
	}

	close(source);
	close(destination);

	return (0);
}

/**
 * check_status - Checks if a file operation was successful.
 * @status: The status of the operation(e.g., file descriptor or return value)
 * @file_name: Name of the file.
 * @perms: 'O' for open, 'W' for write.
 *
 * Return: void.
 */
void check_status(int status, const char *file_name, char perms)
{
	if (status == -1)
	{
		if (perms == 'O')
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		else if (perms == 'W')
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);

		exit((perms == 'O') ? 98 : 99);
	}
}

