#include <stdio.h>

/**
 * main - print alphabet in Uppercase and lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char p;
	char l;

	p = 'a';
	l = 'A';
	while (p <= 'z')
	{
		putchar(p);
		p++;
	}
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
