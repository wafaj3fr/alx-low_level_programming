#include <stdio.h>
/**
 * infinite_add - adds two strings.
 * @n1: first string
 * @n2: second string
 * @r: buffer
 * @size_r: buffer size
 * Return: Resulting string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, c = 0, a, b, sum, biggest;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > len2)
		biggest = len1;
	else
		biggest = len2;
	if ((biggest + 1) >= size_r)
		return (0);
	r[biggest + 1] = '\0';

	while (biggest >= 0)
	{
		a = (n1[len1 - 1] - '0');
		b = (n1[len2 - 1] - '0');
		if (len1 > 0 && len2 > 0)
			sum = a + b + c;
		else if (len1 < 0 && len2 > 0)
			sum = b + carry;
		else if (len1 > 0 && len2 < 0)
			sum = a + c;
		else
			sum = c;

		if (sum > 9)
		{
			c = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			c = 0;
			sum = sum + '0';
		}
		r[biggest] = sum;
		len1--;
		len1--;
		biggest--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}
