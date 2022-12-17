#include "main.h"

/**
 * print_diagonal - printing diagonal line
 * @n: input value
 * Return: Success value
 */
void print_diagonal(int n)
{
	int var;
	int space = 1;

	for (var = 0; var < n; var++)
	{
		while (space < n)
		{
			_putchar(32);
			space++;
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
	
}
