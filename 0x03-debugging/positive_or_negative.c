#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The positive and negative
 * positive_or_negative - testing to if number is
 * positive or negative
 * Return: Always 0 (Success)
 */
int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
