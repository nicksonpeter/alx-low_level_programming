#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printing alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
