#include "main.h"

/**
 * print_diagonal - printing diagonal line
 * @n: input value
 * Return: Success value
 */
void print_diagonal(int n)
{
	int var;

	for (var = 0; var < n; var++)
	{
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
