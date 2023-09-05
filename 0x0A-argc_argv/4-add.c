#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
