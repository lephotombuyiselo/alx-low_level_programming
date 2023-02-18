#include <stdio.h>
/**
 *  main - prints all alphabet except two q and e.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char p;

	p = 'a';
	while (p <= 'z')
	{
		if ((p != 'q' && p != 'e') && p <= 'z')
			putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
