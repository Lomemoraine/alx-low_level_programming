#include <stdio.h>

/**
 * main - Entry point for code execution
 *
 *
 * Return: 0 for a succcesful execution
 */
int main(void)
{
        char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

        for (i = 0; i < 52; i++)
        {
                putchar(alphabet[i]);
        }
        putchar('\n');
        return (0);
}
