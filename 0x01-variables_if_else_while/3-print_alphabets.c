#include <stdio.h>
#include <stdlib.h>

/**
 * main - lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha1;
	char alpha2;

	for (alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
	{
		putchar(alpha1);
	}
	for (alpha2 = 'A'; alpha2 <= 'Z'; alpha2++)
	{
		putchar(alpha2);
	}

	putchar('\n');
	return (0);
}
