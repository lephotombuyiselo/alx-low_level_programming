#include <stdio.h>

/**
 *  main  - print alphabet in lowercase.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char p;

	p = 'a';

	while (p <= 'z')
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
