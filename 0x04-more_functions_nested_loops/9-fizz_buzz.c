#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0 is sucess
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			putchar(i);
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
