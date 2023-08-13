#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 means success
 */

int main(void)
{
	int i, j;

	for (i = 0 ; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (j != i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
