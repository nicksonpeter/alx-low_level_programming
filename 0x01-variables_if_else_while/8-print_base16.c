#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha1;
	char alpha2;

	for (alpha1 = 48; alpha1 < 58; alpha1++)
		putchar(alpha1);
	for (alpha2 = 'a'; alpha2 <= 'f'; alpha2++)
		putchar(alpha2);
	putchar('\n');
	return (0);
}
