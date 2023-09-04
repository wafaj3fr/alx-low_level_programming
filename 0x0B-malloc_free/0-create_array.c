#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it.
 * @size : the Size of the array.
 * @c: characture to initialize the array with.
 * Return: An array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size <= 0)
		return (NULL);
	s = malloc(size);
	if (s == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
