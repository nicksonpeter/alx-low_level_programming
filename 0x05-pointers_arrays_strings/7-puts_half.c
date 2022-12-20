#include "main.h"

/**
 * puts_half - printing the half of the string
 * @str: the input
 */
void puts_half(char *str)
{
	int count = 0, var, val;

	while (str[count] != '\0')
	{
		count++;
	}

	val = (count / 2);

	for (var = val; var < count; var++)
	{
		_putchar(str[var]);
	}
	_putchar('\n');
}
