#include "main.h"

/**
 * print_line - drawing straight line
 * @n: input value
 * Return: Success value
 */
void print_line(int n)
{
	int var;

	for (var = 0; var < n; var++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
