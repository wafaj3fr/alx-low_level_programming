#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * @ac: arguments count.
 * @av: arguments.
 * Return: pointer to a new string or NULL.
 */

char *argstostr(int ac, char **av)
{
	int size, c, a, b = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < ac; c++)
	{
		for (a = 0; av[c][a] != '\0'; a++)
		{
			size += 1;
		}
		size += 1;
	}
	size += 1;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (c = 0; c < ac; c++)
	{
		for (a = 0; av[c][a] != '\0'; a++)
		{
			s[b] = av[c][a];
			b++;
		}
		s[b] = '\n';
		b++;
	}
	s[b] = '\0';
	return (s);
}
