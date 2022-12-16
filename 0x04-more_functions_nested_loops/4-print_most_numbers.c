#include "main.h"

/**
 * print_most_numbers - printing numbers except
 * for number 2 and 4
 * Return: Success value
 */
void print_most_numbers(void)
{
	char numbers;

	for (numbers = 48; numbers < 58; numbers++)
	{
		if (numbers != 50 && numbers != 52)
		{
			_putchar(numbers);
		}
	}
	_putchar('\n');
}
