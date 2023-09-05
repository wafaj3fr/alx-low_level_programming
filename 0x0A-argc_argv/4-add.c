#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *s;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			for (j = 0; j < strlen(s); j++)
			{
				if (s[j] < 48 || s[j] > 57)
				{
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
