#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 48; numbers < 58; numbers++)
	{
		putchar(numbers);
		if (numbers != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
