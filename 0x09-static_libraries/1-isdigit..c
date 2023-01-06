#include "main.h"

/**
 * _isdigit - checking the digits
 * @c: Input value
 * Return: Success value
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
