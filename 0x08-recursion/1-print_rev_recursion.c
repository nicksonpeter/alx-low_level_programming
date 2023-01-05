#include "main.h"

/**
 * _print_rev_recursion - printing in reverse
 * @s: The String
 * Return: @s
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
