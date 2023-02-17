#include <stdio.h>

/**
 * main - print alphabet in Uppercase and lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphz[52] = "abcdefghijklmnopqrstuvwyzABCDEFGHIJKLMNOPQRSTUVWYZ"
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphz[i]);
	}
	putchar('\n');
	return (0);
}
