#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints the last digit
 * @value: The Return
 * Return: success value
 */
int print_last_digit(int value)
{
	int var;

	var = _abs(value) % 10;
	_putchar(var + '0');
	return (var);
}
