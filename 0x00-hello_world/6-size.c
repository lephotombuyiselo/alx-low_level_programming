#include <stdio.h>
/**
 * main - A program print various sizes of variable type
 * Return: 0 (Succcess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a  char: %d btye(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %d btye(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %d btye(s)\n", (unsigned long)sizeof(f));
return (0);
}
