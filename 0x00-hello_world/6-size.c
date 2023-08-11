#include <stdio.h>

/**
 * main - Entry point
 *
 *return : 0 means success
 */
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %li byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long));
printf("Size of a long long: %ld byte(s)\n", sizeof(long long));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
