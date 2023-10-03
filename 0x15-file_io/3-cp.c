#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"
#define CLOSE_ERR "Error: Can't close fd %d\n"
#define PERMS (0664)

/**
 * main - Copy the content of one file to another.
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, exit codes on error.
 */
int main(int ac, char **av)
{
	int from = 0, to = 0;
	ssize_t b;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}
	from = open(av[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, READ_ERR, av[1]);
		exit(98);
	}
	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMS);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, WRITE_ERR, av[2]);
		exit(99);
	}

	while ((b = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(to, buffer, b) != b)
		{
			dprintf(STDERR_FILENO, WRITE_ERR, av[2]);
			exit(99);
		}
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, READ_ERR, av[1]);
		exit(98);
	}
	from = close(from);
	to = close(to);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERR, from);
		exit(100);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERR, to);
		exit(100);
	}

	return (EXIT_SUCCESS);
}

