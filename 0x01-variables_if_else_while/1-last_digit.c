#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - determine the last digit in a random number whether is great than five, zero or less than six not equal zero.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
if ((n % 10) > 5)
{	
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n,last_digit);
}
else
{
	printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
return (0);
}
