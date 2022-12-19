#include "main.h"

/**
 * _puts - printing a string
 * @str: the string value
 * Return: string of @str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
