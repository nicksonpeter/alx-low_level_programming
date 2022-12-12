#include <stdio.h>
#include <stdlib.h>

/**
 * main - using putchar to display numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 48; numbers < 58; numbers++)
		putchar(numbers);
	putchar('\n');
	return (0);
}
