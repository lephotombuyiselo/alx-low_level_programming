#include <stdio.h>
/**
 *  main - prints all alphabet except two q and e.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a', low <= 'z'; low++)
	{
	if (low != e & = low != q)
	putchar(low);
	}
	puchar('\n');
	return (0);
}
