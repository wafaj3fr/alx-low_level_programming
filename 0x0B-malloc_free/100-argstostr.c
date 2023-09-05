#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * @ac: arguments count.
 * @av: arguments.
 * Return: pointer to a new string or NULL.
 */

char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int i, z, length;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (z = 0; temp[z]; z++)
		{
			length++;
		}
		length += 1;
	}
	str = malloc(sizeof(char) * length + 1);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (z = 0; temp[z]; ++z)
		{
			str[length] = temp[z];
			length++;
		}
		str[length] = '\n';
		length++;
	}
	str[length] = '\0';
	return (str);
}


