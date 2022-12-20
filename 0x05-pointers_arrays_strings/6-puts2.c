#include "main.h"

/**
 * puts2 - printing every character of string
 * @str: the string parameter
 */
void puts2(char *str)
{
	int count = 0;
	int var;

	while (str[count] != '\0')
	{
		count++;
	}

	for (var = 0; var < count; var++)
	{
		if (var % 2 == 0)
			_putchar(str[var]);
	}

	_putchar('\n');
}
