#include <stdio.h>
#include <stdlib.h>

/**
 * main - listing numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		printf("%d", numbers);
	printf("\n");
	return (0);
}
