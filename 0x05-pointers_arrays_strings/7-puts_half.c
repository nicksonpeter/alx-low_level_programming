#include "main.h"

/**
 * puts_half - printing the half of the string
 * @str: the input
 */
void puts_half(char *str)
{
	int count = 0, var, val;

	for (var = 0; str[var] != '\0': var++)
	{
		count++;
	}

	val = (count / 2);

	if ((count % 2) == 1)
	{
		val = ((count + 1) / 2);
	}

	for (var = val; str[var] != '\0'; var++)
	{
		_putchar(str[var]);
	}
	_putchar('\n');
}
