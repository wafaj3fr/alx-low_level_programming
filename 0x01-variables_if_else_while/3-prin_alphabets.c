#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 means success
 */
int main(void)
{
        char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;
        for (i=0;i<52;i++)
        {
                putchar(alphabet[i]);
        }
        putchar("\n");
return (0);
}

