#include <stdio.h>
/**
 * main - A programm that print numbers from 0 to 9.
 * Return: Always 0 (Succes)
 */
int  main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
