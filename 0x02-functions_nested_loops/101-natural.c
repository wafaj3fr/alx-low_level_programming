#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 is success
 */

int main(void)
{
	int i , s;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			int sum = 0;
			sum = sum + i;
			return sum;
		}
	}

	s = sum;
	printf("%d\n", s);
	return (0);
}
