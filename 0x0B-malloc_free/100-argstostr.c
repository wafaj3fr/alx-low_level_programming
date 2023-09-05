#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * @ac: arguments count.
 * @av: arguments.
 * Return: pointer to a new string or NULL.
 */

char *argstostr(int ac, char **av)
{
	int i, j, l = 0;
	char *s, t;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		t = *(av + i);
		for (j = 0; t[j]; j++)
		{
			s[l] = t[j];
			l++;
		}
		s[l] = '\n';
		l++;
	}
	s[l] = '\0';
	return (s);
}
