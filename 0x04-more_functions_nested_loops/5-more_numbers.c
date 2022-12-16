#include "main.h"

/**
 * more_numbers - printing numbers
 * Return: Success value
 */
void more_numbers(void)
{
	char numbers;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (numbers = 0; numbers < 15; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar('1');
			}
			_putchar((numbers % 10) + '0');
		}
	_putchar('\n');
	}
}
