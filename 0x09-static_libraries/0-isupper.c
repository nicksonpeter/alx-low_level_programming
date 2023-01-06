#include "main.h"

/**
 * _isupper - checking for uppercase
 * @c: Input character
 * Return: Success value
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
