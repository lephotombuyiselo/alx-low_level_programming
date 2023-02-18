#include <studio.h>
/**
 * main - prints number of the base 16.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;
	char low;

	for(h = '0'; h <= '9'; h++)
	putchar(h);

	for (low = 0; low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
