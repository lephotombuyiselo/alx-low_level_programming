#include <stdio.h>

/**
 * main - print all possible combinations.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
