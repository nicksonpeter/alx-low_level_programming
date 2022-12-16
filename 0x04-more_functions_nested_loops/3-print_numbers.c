#include "main.h"

/**
 * print_numbers - printing numbers
 * Return: Success value
 */
void print_numbers(void)
{
	char numbers;

	for (numbers = 48; numbers < 58; numbers++)
		_putchar(numbers);
	_putchar('\n');
}
