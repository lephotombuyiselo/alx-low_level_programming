#include <stdio.h>
/**
 * main - A program print various sizes of variable type
 * Return:0 (Succcess)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a  char: %lu btye(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu btye(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("SIze of a float: %lu btye(s)\n", (unsigned long)sizeof(f));
return (0);
}
