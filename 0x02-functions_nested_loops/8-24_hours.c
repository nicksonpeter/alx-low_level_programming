#include "main.h"

/**
 * jack_bauer - every minute of the day
 * Return: success value
 */
void jack_bauer(void)
{
	int i,j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
